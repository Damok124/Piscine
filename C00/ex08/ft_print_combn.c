/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 08:28:11 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/04 13:45:28 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_combn(int comb, int n)
{
	char	c;

	c = '0';
	if (--n)
		ft_write_combn(comb / 10, n);
	c = '0' + comb % 10;
	write(1, &c, 1);
}

int	ft_check_combn(int comb, int n)
{
	int	x;
	int	a;

	x = 1;
	a = n;
	while (a)
	{
		x *= 10;
		a--;
	}
	while (++a < n)
	{
		if ((comb % x) / (x / 10) >= (comb % (x / 10) / (x / 100)))
			return (0);
		x /= 10;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int		comb;
	int		last;
	int		a;

	comb = n + 1;
	last = 0;
	a = 10 - n;
	while (--comb)
	{
		last *= 10;
		last = last + a++;
	}
	comb = -1;
	a = -1;
	while (++comb <= last)
	{
		if (ft_check_combn(comb, n))
		{
			if (++a)
				write(1, ", ", 2);
			ft_write_combn(comb, n);
		}
	}
}
