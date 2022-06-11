/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:34:01 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/30 15:21:30 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
*/
int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index < 0)
		return (-1);
	return (0);
}
/*
**int	main(void)
**{
**	int	index;
**
**	index = 40;
**	printf("%d", ft_fibonacci(index));
**	return (0);
**}
*/
