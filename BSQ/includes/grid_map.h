/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:05:28 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 23:29:33 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_MAP_H
# define GRID_MAP_H
# include <stdlib.h>

typedef struct s_map
{
	char				*color_char;
	char				**grid;
	unsigned int		grid_start;
	unsigned int		lines;
	unsigned int		width;
}	t_map;

t_map	*init_map(int size);
int		sp_strlen(t_map *map, char *buf);
int		get_width(t_map *map, char *buf, unsigned int min);
void	free_map(t_map *map);
#endif
