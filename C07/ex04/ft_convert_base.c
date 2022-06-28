/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:02:10 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/28 12:23:32 by zharzi           ###   ########.fr       */
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

char	*ft_nbr_base(char *s, int nbr, char *base, int *len)
{
	if (nbr < 0)
	{
		s[0] = '-';
		if (nbr <= (-ft_strlen(base)))
			ft_nbr_base(s, nbr / -ft_strlen(base), base, len - 1);
		s[*len] = base[-nbr % ft_strlen(base)];
	}
	else
	{
		if (nbr >= ft_strlen(base))
			ft_nbr_base(s, nbr / ft_strlen(base), base, len - 1);
		s[*len] = base[nbr % ft_strlen(base)];
	}
	return (s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		*len;
	int		n;
	int		z;

	z = 0;
	len = &z;
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	ft_len_conv(n, base_to, len);
	res = (char *)malloc(*len + 1);
	res = ft_nbr_base(res, n, base_to, len);
	free(res);
	return (res);
}

int	main(void)
{
	printf("%s\n", ft_convert_base("ABCD", "0123456789ABCDEF", "01234567"));
	return (0);
}
