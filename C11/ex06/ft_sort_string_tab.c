/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:45:49 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/11 19:44:56 by zharzi           ###   ########.fr       */
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

void	ft_sort_string_tab(char **tab)
{
	int	size;
	int	i;
	int	j;

	size = ft_tablen(tab);
	i = -1;
	j = 0;
	while ((++i) + 1 < size)
	{
		while ((tab[i][j] || tab[i + 1][j]) && tab[i][j] == tab[i + 1][j])
			j++;
		if ((tab[i][j] || tab[i + 1][j]) && tab[i][j] > tab[i + 1][j])
		{
			ft_str_swap(tab, i, i + 1);
			i = -1;
		}
		j = 0;
	}
}
