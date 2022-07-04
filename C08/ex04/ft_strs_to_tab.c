/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:11:42 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/02 16:30:49 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;

	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str *) * (ac + 1));
	(void)av;
	return (tab);
}

int	main(int ac, char **av)
{
	struct s_stock_str	*tab;

	tab = ft_strs_to_tab(ac, av++);
	printf("%p\n", tab);
	free(tab);
	return (0);
}
