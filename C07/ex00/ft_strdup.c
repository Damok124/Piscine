/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:25:24 by zharzi            #+#    #+#             */
/*   Updated: 2022/02/02 17:31:35 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <unistd.h>
**#include <stdio.h>
*/
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc((sizeof(char) * ft_strlen(src)) + 1);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	printf("%s", ft_strdup(argv[1]));
**	return (0);
**}
*/
