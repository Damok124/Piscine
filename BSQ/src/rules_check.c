/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:59 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 23:32:02 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules_check.h"

int	check_line(t_map *map, char *buf, unsigned int index, unsigned int line)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (buf[++i + index] && i < map->width)
		if (buf[i + index] != map->color_char[0]
			&& buf[i + index] != map->color_char[1])
			return (0);
	if (buf[i + index] != '\n' || !buf[i])
		return (0);
	map->grid[line] = malloc(i * sizeof(char));
	j = -1;
	while (++j < i)
		map->grid[line][j] = buf[j + index];
	return (1);
}

int	check_grid(t_map *map, char *buf)
{
	int				i;
	unsigned int	line;

	line = -1;
	i = map->grid_start;
	while (++line < map->lines && buf[i])
	{
		if (!check_line(map, buf, i, line))
			return (0);
		i += map->width + 1;
	}
	if (line != map->lines || !(buf[i - 1] == '\n' && buf[i] == '\0'))
		return (0);
	return (1);
}

t_map	*get_lines_count(char *buf)
{
	int					i;
	unsigned int		size;
	t_map				*map;

	i = 0;
	while (buf[i] && buf[i] >= '0' && buf[i] <= '9')
		i++;
	size = ft_antoi(buf, i);
	if (size == 0)
		return (NULL);
	map = init_map(size);
	map->grid_start = i;
	return (map);
}

int	is_color_char_valid(char *buf, t_map *map)
{
	return (buf[map->grid_start] >= ' ' && buf[map->grid_start + 1] >= ' '
		&& buf[map->grid_start + 2] >= ' '
		&& buf[map->grid_start] != buf[map->grid_start + 1]
		&& buf[map->grid_start + 1] != buf[map->grid_start + 2]
		&& buf[map->grid_start + 2] != buf[map->grid_start]
		&& buf[map->grid_start + 3] == '\n');
}

t_map	*check_first_line(char *buf, unsigned int min)
{
	t_map	*map;

	map = get_lines_count(buf);
	if (!map)
		return (0);
	if (is_color_char_valid(buf, map))
	{
		map->color_char[0] = buf[map->grid_start];
		map->color_char[1] = buf[map->grid_start + 1];
		map->color_char[2] = buf[map->grid_start + 2];
		map->grid_start += 4;
		if (!get_width(map, buf, min))
		{
			free(map);
			return (NULL);
		}
	}
	else if (map)
	{
		free(map);
		return (NULL);
	}
	return (map);
}
