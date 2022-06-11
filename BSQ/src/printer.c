/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:55 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 22:49:40 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printer.h"

void	print_map(t_map *map, int x, int y, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			map->grid[i + x][j + y] = map->color_char[2];
	}
	i = -1;
	while (++i < map->lines)
	{
		write(1, map->grid[i], map->width);
		write(1, "\n", 1);
	}
}
