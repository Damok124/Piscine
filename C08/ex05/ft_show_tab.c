/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:54:22 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/05 19:08:39 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
t_stock_str			ft_def_block(char *s, int len);
char				*ft_strdup(char *src);
int					ft_strlen(char *src);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

void	ft_putnbr(int nb)
{
	long int	nbu;

	nbu = nb;
	if (nbu >= 10)
		ft_putnbr(nbu / 10);
	ft_putchar((nbu % 10) + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str && par[i].copy)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
