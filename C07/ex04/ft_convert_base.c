/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:02:10 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/29 20:39:02 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *b);
int	ft_atoi_conv(char *str, char *base, int len);
int	ft_atoi_base(char *str, char *base);

void	ft_len_conv(int nbr, char *base, int *len)
{
	if (nbr < 0)
	{
		*len += 1;
		if (nbr <= (-ft_strlen(base)))
			ft_len_conv(nbr / -ft_strlen(base), base, len);
		*len += 1;
	}
	else
	{
		if (nbr >= ft_strlen(base))
			ft_len_conv(nbr / ft_strlen(base), base, len);
		*len += 1;
	}
}

void	ft_int_base(char *s, int nbr, char *base, int *len)
{
	if (nbr < 0)
	{
		s[0] = '-';
		s[*len - 1] = base[-nbr % ft_strlen(base)];
		if (nbr <= (-ft_strlen(base)))
		{
			*len -= 1;
			ft_int_base(s, nbr / -ft_strlen(base), base, len);
		}
	}
	else
	{
		s[*len - 1] = base[nbr % ft_strlen(base)];
		if (nbr >= ft_strlen(base))
		{
			*len -= 1;
			ft_int_base(s, nbr / ft_strlen(base), base, len);
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		len;
	int		n;
	int		i;

	i = -1;
	len = 0;
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	ft_len_conv(n, base_to, &len);
	res = (char *)malloc(len + 1);
	while (++i < len)
		res[i] = i + '0';
	res[len] = '\0';
	ft_int_base(res, n, base_to, &len);
	return (res);
}
