/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:09:01 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/31 11:37:21 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
**#include <stdlib.h>
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
**int	main(void)
**{
**	int	nb;
**
**	nb = 2147395600;
**	printf("%d", ft_sqrt(nb));
**	return (0);
**}
*/
/*
**int	main(int argc, char **argv)
**{
**	(void)argc;
**	printf("%d", ft_sqrt(atoi(argv[1])));
**	return (0);
**}
*/
