/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 08:28:11 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/20 11:34:13 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	char	tab[10];
	char	c;
	int		i;
	int		x;

	i = -1;
	c = '0';
	while (++i < n)
		tab[i] = c++;
	tab[n] = '\0';
	// poursuivre en int, gerer les 0 avec un modulo overflow par rapport a n
	i = 0;
	while (tab[i])
	{
		x = x + tab[i] - '0';
		if (tab[i + 1])
			x = x * 10;
		i++;
	}
	printf("atoi %d\n", x);
}

int	main(void)
{
	int	n;

	n = 3;
	ft_print_combn(n);
	return (0);
}
