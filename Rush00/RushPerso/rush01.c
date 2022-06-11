/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:28:54 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/16 11:45:15 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char result);
void	ft_head(int x_tmp, int x);
void	ft_body(int x_tmp, int x);
void	ft_foot(int x_tmp, int x);

void	rush(int x, int y)
{
	int	x_tmp;
	int	y_tmp;

	x_tmp = 0;
	y_tmp = 0;
	while (y_tmp < y)
	{
		if (y_tmp == 0)
			ft_head(x_tmp, x);
		else if (y_tmp != y - 1)
			ft_body(x_tmp, x);
		else
			ft_foot(x_tmp, x);
		y_tmp++;
	}
	ft_putchar('\n');
}

void	ft_head(int x_tmp, int x)
{
	while (x_tmp != x)
	{
		if (x_tmp == 0)
			ft_putchar('/');
		else if (x_tmp == (x - 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
		++x_tmp;
	}
	ft_putchar('\n');
}

void	ft_body(int x_tmp, int x)
{
	while (x_tmp != x)
	{
		if (x_tmp == 0 || x_tmp == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		++x_tmp;
	}
	ft_putchar('\n');
}

void	ft_foot(int x_tmp, int x)
{
	while (x_tmp != x)
	{
		if (x_tmp == 0)
			ft_putchar('\\');
		else if (x_tmp == (x - 1))
			ft_putchar('/');
		else
			ft_putchar('*');
		++x_tmp;
	}
	ft_putchar('\n');
}
