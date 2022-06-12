/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcombn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 08:28:11 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/31 22:16:38 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i]);
}

void	ft_print_combn(int n)
{
	int tab[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	while (n)
		while
			if (tab[n] > 9)
				tab[n-1] += 1;
				tab[n] = tab[n-1] + 1;
}

int	main(void)
{
	int	n;

	n = 2;
	ft_printcomb(n);
	return (0);
}
