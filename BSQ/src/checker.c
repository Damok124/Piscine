/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:09:50 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/23 23:35:17 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_horizontal(int pos, int value, int *boxes)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (pos != i && boxes[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int	get_vertical(int x, int pos, int value, int **boxes)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (x != i && boxes[i][pos] == value)
			return (1);
		i++;
	}
	return (0);
}

int	get_horizontal_value(int value, int *boxes)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (boxes[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int	check_cell(int x, int y, int **boxes)
{
	int	k;

	k = 0;
	while (++k <= 4)
		if (!get_vertical(x, y, k, 4, boxes)
		&& !get_horizontal(y, k, 4, boxes[x]))
			return (k);
	return (-1);
}

int	check_cell_value(int x, int y, int **boxes)
{
	int	i;

	i = 0;
	while (get_horizontal_value(++i, 4, boxes[x]))
		;
	if (!get_vertical(x, y, i, 4, boxes) && !get_horizontal(y, i, 4, boxes[x]))
		return (i);
	return (-1);
}
