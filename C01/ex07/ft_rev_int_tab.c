/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:14:38 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/20 20:32:35 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
