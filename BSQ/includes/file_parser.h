/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parser.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:05:15 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 22:50:43 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_PARSER_H
# define FILE_PARSER_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "grid_map.h"
# include "rules_check.h"

t_map	*parse_file(char *path);
#endif
