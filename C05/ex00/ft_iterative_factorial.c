/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:57:51 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/29 15:32:03 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
**int	main(void)
**{
**	int nb;
**	nb = 6;
**	printf("%d", ft_iterative_factorial(nb));
**	return (0);
**}
*/
