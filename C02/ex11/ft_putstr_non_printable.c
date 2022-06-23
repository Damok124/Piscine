/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:35:04 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/23 15:46:11 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnp_hexa(int c, char *base, int l)
{
	if (c >= 0 && c <= 1)
		ft_putchar(base[c % l]);
	else
	{
		ft_putnp_hexa(c / l, base, l);
		ft_putchar(base[c % l]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		c;
	char	*base;

	i = -1;
	c = 0;
	base = "0123456789abcdef";
	while (str[++i])
	{
		c = str[i];
		if (c < 32)
		{
			ft_putchar('\\');
			ft_putnp_hexa(c, base, 16);
		}
		else
			ft_putchar(c);
	}
}
