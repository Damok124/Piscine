/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 00:26:52 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/18 20:17:10 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}
/*
**int main(void)
**{
**	int a;
**	int b;
**	int div;
**	int mod;
**	a = 10;
**	b = 3;
**	ft_div_mod(a, b, &div, &mod);
**	
**	printf("Div de %d par %d.\nRés : %d; Rest %d.", a, b, div, mod);
**	return (0);
**}
*/
