/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:43:06 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/21 22:57:09 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/// de min a maj -32  a97 z122 A65 Z90     048 957
/// de maj a min +32

char	ft_check_case(char *s, int i)
{
	char	c;

	c = 'v';
	if (s[i] >= '0' && s[i] <= '9')
		c = 'n';
	else if (s[i] >= 'A' && s[i] <= 'Z')
		c = 'u';
	else if (s[i] >= 'a' && s[i] <= 'z')
		c = 'l';
	return (c);
}

int	ft_check_pos(char *s, int i)
{
	int		a;
	char	test;

	a = 0;
	test = ft_check_case(s, i);
	if (i == 0 && test == 'l')
		a = 1;
	else if (i != 0 && ft_check_case(s, i - 1) == 'v' && test == 'l')
		a = 1;
	else if (i != 0 && ft_check_case(s, i - 1) != 'v' && test == 'u')
		a = 2;
	return (a);
}

char	*ft_strcapitalize(char *s)
{
	int		i;
	char	c;

	i = -1;
	c = '0';
	printf("test : %s\n", s);
	while (s[++i])
	{
		c = s[i];
		printf("s[i] : %c\n", s[i]);
		if (ft_check_pos(s, i) == 1)
		{
			printf("c avant : %c\n", c);
			c -= 32;
			printf("c apres : %c\n", c);
			s[i] = c;
		}
		else if (ft_check_pos(s, i) == 2)
		{
			c += 32;
			s[i] = c;
		}
	}
	return (s);
}
/*
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = -32;
		while (str[i] < 'a' || str[i] > 'z')
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || \
			(str[i] >= '0' && str[i] <= '9'))
				j = 0;
			i++;
		}
		while ((str[i] >= 'a' && str[i] <= 'z') || \
		(str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			str[i] += j;
			if (j != 0)
				j = 0;
			i++;
		}
	}
	return (str);
}
*/
int	main(void)
{
	char *str = "   aBcDeFFgHi42jkl23PqRSTUVwxy Z a B C 89pop 90POP !!ah 23! 23a!";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
