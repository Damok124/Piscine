/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:04:40 by maugerea          #+#    #+#             */
/*   Updated: 2022/02/02 22:38:33 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int n)
{
	int	i;
	int	total;

	i = -1;
	total = 1;
	while (++i < n)
		total *= 10;
	return (total);
}

unsigned int	ft_antoi(char *str, int size)
{
	int				i;
	unsigned int	result;

	i = -1;
	result = 0;
	while (++i < size)
		result += (str[i] - 48) * ft_pow(size - i - 1);
	return (result);
}
