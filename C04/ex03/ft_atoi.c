/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:48:01 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/26 23:37:24 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (*str && ((*str >= '\t' && *str <= '\r') || *str == ' '))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			k *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		if (i != 0)
			i *= 10;
		i += *str - '0';
		str++;
	}
	return (i * k);
}
