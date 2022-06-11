/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:50 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 23:29:27 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid_map.h"

t_map	*init_map(int size)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	*map = (t_map)
	{
		.color_char = malloc(3 * sizeof(char)),
		.grid = malloc(size * sizeof(char*)),
		.lines = size,
		.width = 0,
		.grid_start = 0
	};
	return (map);
}

int	sp_strlen(t_map *map, char *buf)
{
	unsigned int	i;

	i = -1;
	while (buf[++i] != '\n' && buf[i])
		;
	if (i <= 1)
		return (0);
	map->width = i;
	i = -1;
	while (++i < map->lines)
		map->grid[i] = malloc(map->width * sizeof(char));
	return (1);
}

int	get_width(t_map *map, char *buf, unsigned int min)
{
	unsigned int	i;

	i = map->grid_start;
	while (buf[i] != '\n' && buf[i])
		i++;
	if (i - map->grid_start < min)
		return (0);
	map->width = i - map->grid_start;
	i = -1;
	while (++i < map->lines)
		map->grid[i] = malloc(map->width * sizeof(char));
	return (1);
}

void	free_map(t_map *map)
{
	unsigned int	i;

	i = -1;
	while (++i < map->lines)
		if (map->grid[i])
			free(map->grid[i]);
	free(map->grid);
	free(map->color_char);
	free(map);
}
