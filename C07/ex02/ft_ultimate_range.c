/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:21:59 by zharzi            #+#    #+#             */
/*   Updated: 2022/02/03 19:26:09 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
**#include <stdio.h>
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = NULL;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
/*
**int	main(void)
**{
**	int	*tab;
**	int	size;
**
**	tab = NULL;
**	size = ft_ultimate_range(&tab, 3, 4096);
**	while (size--)
**		printf("%d\n", tab[size]);
**	free(tab);
**	tab = NULL;
**	return (0);
**}
*/
