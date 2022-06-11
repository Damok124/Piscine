/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:20:28 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/31 11:37:20 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
**#include <stdlib.h>
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
**int	main(int argc, char **argv)
**{
**	(void)argc;
**	printf("%d", ft_is_prime(atoi(argv[1])));
**	return (0);
**}
*/
