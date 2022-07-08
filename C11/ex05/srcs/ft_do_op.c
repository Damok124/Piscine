/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:54:50 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/08 13:57:36 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_do_op(int a, int b, int o, int(**ft)(int, int))
{
	int	res;

	if (o == 5)
		res = 0;
	else
		res = (ft[o])(a, b);
	return (res);
}