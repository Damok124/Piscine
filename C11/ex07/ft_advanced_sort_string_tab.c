/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:20:46 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/11 19:40:56 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_str_swap(char **tab, int a, int b)
{
	int	n;

	n = ft_tablen(tab);
	tab[n] = tab[a];
	tab[a] = tab[b];
	tab[b] = tab[n];
	tab[n] = NULL;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	i;

	size = ft_tablen(tab);
	i = -1;
	while ((++i) + 1 < size)
	{
		if ((cmp)(tab[i], tab[i + 1]) > 0)
		{
			ft_str_swap(tab, i, i + 1);
			i = -1;
		}
	}
}
