/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:37:41 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/30 15:21:33 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, --power));
	return (0);
}
/*
**int	main(void)
**{
**	int	nb;
**	int	power;
**
**	nb = 2;
**	power = 3;
**	printf("%d", ft_recursive_power(nb, power));
**	return (0);
**}
*/
