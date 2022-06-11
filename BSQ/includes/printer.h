/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:05:32 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 22:51:37 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_H
# define PRINTER_H
# include <unistd.h>
# include "grid_map.h"

void	print_map(t_map *map, int x, int y, unsigned int size);
#endif
