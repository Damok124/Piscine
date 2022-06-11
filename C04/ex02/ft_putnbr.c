/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:50:54 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/30 01:24:50 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbu;

	nbu = nb;
	if (nbu < 0)
	{
		write(1, "-", 1);
		nbu = nbu * -1;
	}
	if (nbu >= 10)
		ft_putnbr(nbu / 10);
	ft_putchar((nbu % 10) + 48);
}
