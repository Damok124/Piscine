/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxes_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:05:19 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/23 23:28:44 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_horizontal(int *boxes, int *safe)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		boxes[i] = i + 1;
		safe[i] = 1;
		i++;
	}
}

void	fill_rev_horizontal(int *boxes, int *safe)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		boxes[i] = 4 - i;
		safe[i] = 1;
		i++;
	}
}

void	fill_vertical(int pos, int **boxes, int **safe)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		boxes[i][pos] = i + 1;
		safe[i][pos] = 1;
		i++;
	}
}

void	fill_rev_vertical(int pos, int **boxes, int **safe)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		boxes[i][pos] = 4 - i;
		safe[i][pos] = 1;
		i++;
	}
}

int	**duplicata(int **boxes)
{
	int		i;
	int		j;
	int		**result;

	result = malloc((4 + 1) * sizeof(int *));
	i = 0;
	while (i < 4)
		result[i++] = malloc(4 * sizeof(int));
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			result[i][j] = boxes[i][j];
			j++;
		}
		i++;
	}
	return (result);
}
