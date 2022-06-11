/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:32:28 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/26 23:06:24 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
**{
**	unsigned int	nb;
**	char			src[] = "Bonjour, ";
**	char			dest[] = "comment ça va?\n";
**
**	nb = 3;
**	printf("classique %s", strncat(dest, src, nb));
**	printf("personnel %s", ft_strncat(dest, src, nb));
**	return (0);
**}
*/
