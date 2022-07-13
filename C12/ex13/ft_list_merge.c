/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:03:19 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 00:16:35 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*buf;

	buf = *begin_list1;
	while (buf && buf->next != begin_list2)
	{
		if (buf->next == NULL)
			buf->next = begin_list2;
		else
			buf = buf->next;
	}
}
