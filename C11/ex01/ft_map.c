/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:38:12 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/08 01:00:17 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_double(int n)
{
	n = n * 2;
	return (n);
}

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

int	main(void)
{
	int	length;
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	*res;
	int (*f)(int);
	int	i;

	length = 10;
	f = &ft_double;
	res = ft_map(tab, length, (*f));
	i = -1;
	while (++i < length)
	{
		printf("%d\n", res[i]);
	}
	free(res);
	return (0);
}
