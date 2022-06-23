/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:43:06 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/22 17:07:22 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_cap_or_min(char *s, int i)
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

	i = -1;
	while (s[++i])
	{
		if (ft_cap_or_min(s, i) == 1)
			s[i] -= 32;
		else if (ft_cap_or_min(s, i) == 2)
			s[i] += 32;
	}
	return (s);
}
