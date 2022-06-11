/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:17 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 23:31:48 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map	*read_inputs(void)
{
	char			*buf;
	t_map			*map;
	unsigned int	line;

	buf = malloc(1024 * sizeof(char));
	read(0, buf, 1024);
	map = check_first_line(buf, 0);
	free(buf);
	line = -1;
	while (++line < map->lines)
	{
		buf = malloc(1024);
		read(0, buf, 1024);
		if (line == 0)
			if (!sp_strlen(map, buf))
				return (NULL);
		if (!check_line(map, buf, 0, line))
			return (NULL);
		free(buf);
	}
	return (map);
}

void	inputs_case(void)
{
	t_map	*map;

	map = read_inputs();
	if (!map)
		write(1, "map error\n", 10);
	else
	{
		greedy_search(map);
		free(map);
	}
}

void	files_case(int argc, char *argv[])
{
	int		i;
	t_map	*map;

	i = 0;
	while (++i < argc)
	{
		map = parse_file(argv[i]);
		if (!map)
			write(1, "map error\n", 10);
		else
		{
			greedy_search(map);
			free(map);
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		inputs_case();
	if (argc >= 2)
		files_case(argc, argv);
	return (0);
}
