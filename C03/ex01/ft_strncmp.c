/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:43:02 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/26 20:35:32 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
**int	main(void)
**{
**	char	s1[] = "Bonjour";
**	char	s2[] = "Bonsoir";
**	int		n;
**
**	n = 0;
**	printf("vraie %d\n", strncmp(s1, s2, n));
**	printf("perso %d\n", ft_strncmp(s1, s2, n));
**	return (0);
**}
*/
