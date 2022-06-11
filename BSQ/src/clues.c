/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:16:29 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/23 23:26:01 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left(int x, int **input, int *boxes)
{
	int	i;
	int	max;
	int	clue;
	int	count;

	i = 0;
	clue = input[2][x];
	count = 0;
	max = 0;
	while (i < 4)
	{
		if (boxes[i] > max)
		{
			max = boxes[i];
			count++;
		}
		i++;
	}
	return (clue == count);
}

int	check_right(int x, int **input, int *boxes)
{
	int	i;
	int	max;
	int	clue;
	int	count;

	i = 4 - 1;
	clue = input[3][x];
	count = 0;
	max = 0;
	while (i >= 0)
	{
		if (boxes[i] > max)
		{
			max = boxes[i];
			count++;
		}
		i--;
	}
	return (clue == count);
}

int	check_clues(int x, int **input, int *boxes)
{
	if (!check_left(x, 4, input, boxes))
		return (0);
	else if (!check_right(x, 4, input, boxes))
		return (0);
	return (1);
}
