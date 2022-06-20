/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:16:28 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/20 20:34:11 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
