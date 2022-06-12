/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:16:28 by zharzi            #+#    #+#             */
/*   Updated: 2022/04/03 07:18:24 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	size--;
	while (i + 1 <= size)
	{
		if (tab[i] > tab[i + 1])
		{
			n = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = n;
			i = 0;
		}
		else
			i++;
	}
}
/*
**int	main(void)
**{
**	int	tab[7] = {-1235, 23, 10, 19, -13, 70, -1};
**	int	size;
**	int	i;
**
**	size = 7;
**	i = 0;
**	ft_sort_int_tab(tab, size);
**	while (i < size)
**	{
**		printf("%i\n", tab[i++]);
**	}
**	return (0);
**}
*/
