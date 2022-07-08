/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:55:09 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/08 18:09:38 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	nbu;
	char		c;

	nbu = nb;
	if (nbu < 0)
	{
		write(1, "-", 1);
		nbu = nbu * -1;
	}
	if (nbu >= 10)
		ft_putnbr(nbu / 10);
	c = ((nbu % 10) + 48);
	write(1, &c, 1);
}
