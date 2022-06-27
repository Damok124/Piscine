/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:31:04 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/27 14:46:09 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
	write(1, "\n", 1);
}

void	ft_sort_params(int len, char *par[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < (len - 1))
	{
		if (par[i][0] >= par[i + 1][0])
		{
			while (par[i][j] == par[i + 1][j])
				j++;
			if (par[i][j] > par[i + 1][j])
			{
				par[0] = par[i];
				par[i] = par[i + 1];
				par[i + 1] = par[0];
			}
			j = 0;
		}
		i++;
	}
	i = 0;
	while (par[++i])
		ft_putstr(par[i]);
}

int	main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	return (0);
}
