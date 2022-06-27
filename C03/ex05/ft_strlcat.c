/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:01:17 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/26 18:38:17 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldst;
	unsigned int	lsrc;
	unsigned int	i;
	unsigned int	j;

	ldst = ft_strlen((char *)dest);
	lsrc = ft_strlen((char *)src);
	i = ldst;
	j = 0;
	if (ldst < size)
	{
		while (i < (size - 1) && j < lsrc)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (lsrc + ldst);
	}
	return (lsrc + size);
}
