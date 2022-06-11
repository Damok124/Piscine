/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:18:51 by nda-cunh          #+#    #+#             */
/*   Updated: 2022/01/16 18:59:43 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_top_or_bottom(int x);
void	ft_body(int x);
void	ft_line_gen(int x, char first, char middle, char last);

void	rush(int x, int y)
{
	int	l_count;

	if (x < 1 || y < 1)
	{
		ft_putchar('\n');
		return ;
	}
	ft_top_or_bottom(x);
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
		ft_top_or_bottom(x);
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

void	ft_top_or_bottom(int x)
{
	ft_line_gen(x, 'A', 'B', 'C');
}

void	ft_body(int x)
{
	ft_line_gen(x, 'B', ' ', 'B');
}
