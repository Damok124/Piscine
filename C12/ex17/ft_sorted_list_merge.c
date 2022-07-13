/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:36:15 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 10:50:13 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, \
int (*cmp)())
{
	t_list	*buf;
	t_list	*tmp;

	buf = *begin_list1;
	while (buf && buf != begin_list2)
	{
		if (buf->next == NULL)
			buf->next = begin_list2;
		buf = (buf)->next;
	}
	begin_list2 = *begin_list1;
	while (begin_list2->next)
	{
		buf = begin_list2;
		tmp = begin_list2->next;
		if ((*cmp)(buf->data, tmp->data) > 0)
		{
			tmp = buf;
			buf = begin_list2;
			begin_list2 = *begin_list1;
		}
		else
			begin_list2 = begin_list2->next;
	}
}
