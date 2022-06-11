/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:02:54 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/31 19:48:50 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != 0)
	{
		c = str[i];
		ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i != 0)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
