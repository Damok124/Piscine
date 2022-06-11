/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:50:51 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/27 23:46:00 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = -1;
	while (str[++i])
	{
		c = str[i];
		write(1, &c, 1);
	}
}
/*
**int	main(void)
**{
**	char str[] = "Bonjour";
**
**	ft_putstr(str);
**	return (0);
**}
*/
