/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:45 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 22:50:19 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "greedy.h"

int	spreading_x(t_map *map, unsigned int x, unsigned int y, unsigned int limit)
{
	unsigned int	i;

	i = -1;
	while (++i < limit && y < map->width && x + i < map->lines)
		if (map->grid[x + i][y] != map->color_char[0])
			return (0);
	if (i != limit)
		return (0);
	return (1);
}

int	spreading_y(t_map *map, unsigned int x, unsigned int y, unsigned int limit)
{
	unsigned int	i;

	i = -1;
	while (++i < limit && x < map->lines && y + i < map->width)
		if (map->grid[x][y + i] != map->color_char[0])
			return (0);
	if (i != limit)
		return (0);
	return (1);
}

int	try_spread(t_map *map, int x, int y)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	i = -1;
	j = -1;
	while (spreading_y(map, x + ++i, y, ++size)
		&& spreading_x(map, x, y + ++j, size))
		;
	return (size - 1);
}

void	greedy_search(t_map *map)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;
	unsigned int	spread;
	unsigned int	size;

	size = 0;
	i = -1;
	while (++i < map->lines)
	{
		j = -1;
		while (++j < map->width)
		{
			spread = try_spread(map, i, j);
			if (spread > size)
			{
				index = i * map->width + j;
				size = spread;
			}
		}
	}
	print_map(map, index / map->width, index % map->width, size);
}
