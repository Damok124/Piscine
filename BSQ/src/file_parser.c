/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:33 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 23:29:08 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_parser.h"

char	*read_file(char *path)
{
	int		file_desc;
	int		cache;
	int		count;
	char	*buf;

	file_desc = open(path, O_RDONLY);
	if (file_desc < 0)
		return (NULL);
	buf = malloc(1024 * sizeof(char));
	cache = read(file_desc, buf, 1024);
	count = 0;
	while (cache == 1024 && ++count >= 0)
		cache = read(file_desc, buf, 1024);
	cache = count * 1024 + cache;
	close(file_desc);
	free(buf);
	file_desc = open(path, O_RDONLY);
	buf = malloc((cache + 1) * sizeof(char));
	read(file_desc, buf, cache);
	close(file_desc);
	return (buf);
}

t_map	*parse_file(char *path)
{
	char	*buf;
	t_map	*map;

	buf = read_file(path);
	if (!buf)
		return (NULL);
	map = check_first_line(buf, 1);
	if (!map || !check_grid(map, buf))
		return (NULL);
	free(buf);
	return (map);
}
