/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:11:42 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/05 23:15:47 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void				ft_show_tab(struct s_stock_str *par);
void				ft_putstr(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc((sizeof(char) * ft_strlen(src)) + 1);
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

t_stock_str	ft_def_block(char *s, int len)
{
	t_stock_str	block;

	block.size = len;
	block.str = s;
	block.copy = ft_strdup(s);
	return (block);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;
	t_stock_str	final;

	i = -1;
	final.size = 0;
	final.copy = NULL;
	final.str = NULL;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
	if (!tab)
		return (NULL);
	while (++i < ac - 1)
	{
		tab[i] = ft_def_block(av[i + 1], ft_strlen(av[i + 1]));
	}
	tab[i] = final;
	return (tab);
}
