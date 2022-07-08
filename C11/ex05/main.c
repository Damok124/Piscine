/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 06:22:33 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/08 14:30:51 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char *av[])
{
	int		a;
	int		b;
	int		o;
	char	*op;
	int		(*ft[5])(int, int);

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	op = "+-/*%\0";
	o = ft_def_op(op, av[2]);
	ft[0] = &ft_add;
	ft[1] = &ft_sub;
	ft[2] = &ft_div;
	ft[3] = &ft_multi;
	ft[4] = &ft_mod;
	if (o == 2 && b == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (o == 4 && b == 0)
		write(1, "Stop : modulo by zero\n", 23);
	else
		ft_putnbr(ft_do_op(a, b, o, ft));/////syntaxe ft???
	return (0);
}
