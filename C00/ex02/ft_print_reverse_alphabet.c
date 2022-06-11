/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:41:20 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/14 01:02:11 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		write(1, &lettre, 1);
		lettre--;
	}
}
