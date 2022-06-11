/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:44:36 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/18 20:18:51 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
**int	main(void)
**{
**	int a;
**	int b;
**	a = 22;
**	b = 7;
**
**	ft_ultimate_div_mod(&a, &b);
**	printf("Div : %d; Mod : %d", a, b);
**	return (0);
**}
*/
