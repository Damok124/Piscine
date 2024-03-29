/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:39:56 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/30 20:43:00 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sep(char *hs, char nd)
{
	int	i;

	i = -1;
	while (hs[++i])
	{
		if (hs[i] == nd)
			return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_strs_count(char *s, char *charset)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_sep(charset, s[i]))
			i++;
		if (s[i] && ft_sep(charset, s[i]) == 0)
			n++;
		while (s[i] && ft_sep(charset, s[i]) == 0)
			i++;
	}
	return (n);
}

char	*ft_substr(char *s, int start, int len)
{
	int		i;
	int		j;
	char	*str;

	i = start;
	j = -1;
	if (len > (ft_strlen(s) - i))
		str = malloc((sizeof(char) * (ft_strlen(s) - i)) + 1);
	else
		str = malloc((sizeof(char) * len) + 1);
	while (++j < len && s[i + j])
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;
	int		a;

	i = -1;
	j = -1;
	a = -1;
	res = (char **)malloc(sizeof(void *) * (ft_strs_count(str, charset) + 1));
	while (++i < ft_strlen(str) && a < ft_strs_count(str, charset))
	{
		if (i == 0 || (ft_sep(charset, str[i - 1]) && !ft_sep(charset, str[i])))
		{
			while (str[i] && ft_sep(charset, str[i]))
				i++;
			while (str[i + (++j)] && !ft_sep(charset, str[i + j]))
				;
			if (++a < ft_strs_count(str, charset))
				res[a] = ft_substr(str, i, j);
			j = 0;
		}
	}
	res[ft_strs_count(str, charset)] = NULL;
	return (res);
}
