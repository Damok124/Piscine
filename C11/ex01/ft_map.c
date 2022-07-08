/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:38:12 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/08 18:02:47 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = -1;
	res = (int *)malloc(sizeof(int) * length);
	while (++i < length)
	{
		res[i] = (*f)(tab[i]);
	}
	return (res);
}
