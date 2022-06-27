/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:31:52 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/27 20:01:43 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_prep(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*res;

	i = -1;
	total = 0;
	if (!size)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	while (++i < size)
		total += ft_strlen(strs[i]);
	total += ft_strlen(sep) * (size - 1);
	res = (char *)malloc(sizeof(char) * total);
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		x;
	int		i;
	int		j;

	x = -1;
	i = -1;
	j = -1;
	res = ft_strjoin_prep(size, strs, sep);
	if (!size)
		return (res);
	while (++i < size)
	{
		if (x > 0)
		{
			while (sep[++j])
				res[++x] = sep[j];
			j = -1;
		}
		while (strs[i][++j])
			res[++x] = strs[i][j];
		j = -1;
	}
	return (res);
}
