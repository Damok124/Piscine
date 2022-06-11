/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:02:14 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/31 20:23:52 by zharzi           ###   ########.fr       */
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
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	return (0);
}
