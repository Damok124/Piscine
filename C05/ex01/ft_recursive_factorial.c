/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:57:51 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/29 21:37:11 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
		return (res = nb * (ft_recursive_factorial(nb - 1)));
	return (0);
}
/*
**int	main(void)
**{
**	int	nb;
**
**	nb = 1;
**	printf("%d", ft_recursive_factorial(nb));
**	return (0);
**}
*/
