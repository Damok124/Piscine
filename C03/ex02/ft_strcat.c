/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:12:32 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/27 15:31:14 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
**int	main(void)
**{
**	char	dest[30] = "Champion ";
**	char	src[30] = "du monde";
**
**	printf("classique %s\n", strcat(dest, src));
**	printf("personnel %s\n", ft_strcat(dest, src));
**	return (0);
**}
*/
