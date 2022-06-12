/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:08:02 by zharzi            #+#    #+#             */
/*   Updated: 2022/04/02 10:15:15 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb >= -9)
	{
		ft_putchar('-');
		ft_putchar('0' - nb % 10);
	}
	else if (nb < -9)
	{
		ft_putchar('-');
		ft_putnbr(nb / -10);
		ft_putchar('0' - nb % 10);
	}
	else if (nb > 0 && nb <= 9)
		ft_putchar('0' + nb % 10);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
