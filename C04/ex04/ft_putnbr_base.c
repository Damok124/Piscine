/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:42:54 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/27 01:01:42 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	i = -1;
	while (base[++i])
	{
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr <= (-ft_strlen(base)))
				ft_putnbr_base(nbr / -ft_strlen(base), base);
			write(1, &base[-nbr % ft_strlen(base)], 1);
		}
		else
		{
			if (nbr >= ft_strlen(base))
				ft_putnbr_base(nbr / ft_strlen(base), base);
			write(1, &base[nbr % ft_strlen(base)], 1);
		}
	}
}
