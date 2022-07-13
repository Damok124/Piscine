/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:36:56 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 00:15:43 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*buf0;
	t_list	*buf1;
	t_list	*buf2;

	buf0 = *begin_list;
	while (buf0->next)
	{
		buf1 = buf0;
		buf2 = buf0->next;
		if ((*cmp)(buf1->data, buf2->data) > 0)
		{
			buf2 = buf1;
			buf1 = buf0;
			buf0 = *begin_list;
		}
		else
			buf0 = buf0->next;
	}
}
