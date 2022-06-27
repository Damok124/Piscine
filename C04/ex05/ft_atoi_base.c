/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 01:16:25 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/27 02:26:55 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *b)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (ft_strlen(b) <= 1)
		return (0);
	while (b[++i])
	{
		if (b[i] == '+' || b[i] == '-' || (b[i] >= '\t' && b[i] <= '\r'))
			return (0);
	}
	i = -1;
	while (b[++i])
	{
		while (b[++j])
		{
			if (b[i] == b[j])
				return (0);
		}
		j = i + 1;
	}
	return (1);
}

int	ft_atoi_conv(char *str, char *base, int len)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (*str)
	{
		while (i < len && *str != base[i])
			i++;
		if (i >= len)
			return (r);
		if (*str == base[i])
		{
			r *= len;
			r += i;
		}
		i = 0;
		str++;
	}
	return (r);
}

int	ft_atoi_base(char *str, char *base)
{
	int	k;

	k = 1;
	if (ft_check_base(base) == 0)
		return (0);
	while (*str && ((*str >= '\t' && *str <= '\r') || *str == ' '))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			k *= -1;
		str++;
	}
	return (k * ft_atoi_conv(str, base, ft_strlen(base)));
}
