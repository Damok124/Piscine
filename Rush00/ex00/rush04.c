/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:18:51 by nda-cunh          #+#    #+#             */
/*   Updated: 2022/01/16 19:03:29 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_head(int x);
void	ft_body(int x);
void	ft_foot(int x);
void	ft_line_gen(int x, char first, char middle, char last);

void	rush(int x, int y)
{
	int	l_count;

	if (x < 1 || y < 1)
	{
		ft_putchar('\n');
		return ;
	}
	ft_head(x);
	l_count = 2;
	if (y > 2)
	{
		while (l_count < y)
		{
			ft_body(x);
			l_count++;
		}
	}
	if (y > 1)
		ft_foot(x);
}

void	ft_line_gen(int x, char first, char middle, char last)
{
	int	c_count;

	ft_putchar(first);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	c_count = 2;
	while (c_count < x)
	{
		ft_putchar(middle);
		c_count++;
	}
	ft_putchar(last);
	ft_putchar('\n');
}

void	ft_head(int x)
{
	ft_line_gen(x, 'A', 'B', 'C');
}

void	ft_body(int x)
{
	ft_line_gen(x, 'B', ' ', 'B');
}

void	ft_foot(int x)
{
	ft_line_gen(x, 'C', 'B', 'A');
}
