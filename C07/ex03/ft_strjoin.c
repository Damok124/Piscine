/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:26:51 by zharzi            #+#    #+#             */
/*   Updated: 2022/04/04 11:03:33 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		i;
	int		lenght;

	i = -1;
	if (!size)
	{
		final = malloc(sizeof(char));
		final[0] = '\0';
		return (final);
	}
	while (++i != size)
		lenght += ft_strlen(strs[i]);
	lenght += ft_strlen(sep) * (size - 1);
	final = (char *)malloc(sizeof(char) * size);
	i = 0;
	while (i != size - 1)
	{
		ft_strcat(final, strs[i]);
		ft_strcat(final, sep);
		i++;
	}
	ft_strcat(final, strs[i]);
	return (final);
}
/*
**int	main(void)
**{
**	char	*strs[] = {"hello", "salut", "test"};
**	int		size;
**
**	size = sizeof(strs) / sizeof(char *);
**	printf("Taille total : %zd\n", sizeof(strs));
**	printf("Taille total : %d\n", size);
**	char	*str = ft_strjoin(size, strs, "|");
**	printf("Resultat : %s\n", str);
**	free(str);
**	str = NULL;
**	return (0);
**}
*/
