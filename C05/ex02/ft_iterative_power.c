/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:37:41 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/30 15:21:36 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
**int	main(void)
**{
**	int	nb;
**	int	power;
**
**	nb = 23;
**	power = 5;
**	printf("%d", ft_iterative_power(nb, power));
**	return (0);
**}
*/
