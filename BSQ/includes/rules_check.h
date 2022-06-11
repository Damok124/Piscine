/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:05:36 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 23:31:27 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_CHECK_H
# define RULES_CHECK_H
# include <stdlib.h>
# include "grid_map.h"
# include "ft_antoi.h"

int		check_line(t_map *map, char *buf,
			unsigned int index, unsigned int line);
int		check_grid(t_map *map, char *buf);
t_map	*check_first_line(char *buf, unsigned int min);
#endif
