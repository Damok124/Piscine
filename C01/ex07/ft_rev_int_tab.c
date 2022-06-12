/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:14:38 by zharzi            #+#    #+#             */
/*   Updated: 2022/04/03 07:16:13 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	size--;
	while (i < size)
	{
		n = tab[size];
		tab[size] = tab[i];
		tab [i] = n;
		i++;
		size--;
	}
}
/*
**int	main(void)
**{
**	int	size;
**	int	i;
**	int	tab[5] = {1, 2, 3, 4, 5};
**
**	size = 5;
**	i = 0;
**	ft_rev_int_tab(tab, size);
**	while (i < size)
**	{
**		printf("%i\n", tab[i++]);
**	}
**	return (0);
**}
*/
