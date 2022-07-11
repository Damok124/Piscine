/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:45:49 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/10 01:00:17 by zharzi           ###   ########.fr       */
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

void	ft_swap_str(char **a, char **b)
{
	char	*buf;
	char	**buff;

	buf = "\0";
	buff = &buf;
	buff = b;
	b = a;
	a = buff;
}

int	ft_check_order(char **tab)
{
	int	i;
	int	j;
	int	len;
	int	test;

	i = 0;
	j = 0;
	test = 1;
	len = ft_tablen(tab);
	while (i < (len - 1))
	{
		while (test && (tab[i][j] || tab[i + 1][j]))
		{
			if (tab[i][j] > tab[i + 1][j])
			{
				test = 0;
				ft_swap_str(tab + i, tab + i + 1);
				i = -1;
				j = -1;
			}
			j++;
		}
		i++;
	}
	return (test);
}

void	ft_sort_string_tab(char **tab)
{
	while (!ft_check_order(tab))
		;
}

int	main(void)
{
	char	*tab[] = {"un", "deux", "trois", "deux", "quatre", "deux", "cinq", "six", "sept"};
	ft_sort_string_tab(tab);
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	(void)argc;
	ft_sort_string_tab(argv + 1);
	return (0);
}
*/
