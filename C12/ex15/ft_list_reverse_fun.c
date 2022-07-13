/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:06:54 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 10:23:01 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*buf0;
	t_list			*buf1;
	t_list			*buf2;
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = ft_list_size(begin_list);
	while (i < j)
	{
		buf1 = ft_list_at(begin_list, i);
		buf2 = ft_list_at(begin_list, j);
		buf0 = buf1;
		buf1 = buf2;
		buf2 = buf0;
		i++;
		j--;
	}
}
