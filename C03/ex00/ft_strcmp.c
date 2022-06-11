/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:39:43 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/26 20:32:53 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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
**	char	s1[] = "bon";
**	char	s2[] = "bonjour";
**
**	printf("classique %d\n", strcmp(s1, s2));
**	printf("personnel %d\n", ft_strcmp(s1, s2));
**	return (0);
**}
*/
