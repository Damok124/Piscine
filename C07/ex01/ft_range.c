/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:26:47 by zharzi            #+#    #+#             */
/*   Updated: 2022/02/03 17:33:32 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <stdio.h>
*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (min < max && tab)
		tab[i++] = min++;
	return (tab);
}
/*
**int	main(int argc, char **argv)
**{
**	int	min;
**	int	max;
**
**	min = atoi(argv[1]);
**	max = atoi(argv[2]);
**	(void)argc;
**	int	*tab = ft_range(min, max);
**	while (*tab)
**		printf("%d\n", *tab++);
**	return (0);
**}
*/
