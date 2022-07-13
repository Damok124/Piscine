/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:24:38 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 10:31:42 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*buf1;
	t_list	*buf2;

	new = ft_create_elem(data);
	if (new)
	{
		if (*begin_list)
			new->next = *begin_list;
		*begin_list = new;
	}
	while (new->next)
	{
		buf1 = new;
		buf2 = new->next;
		if ((*cmp)(buf1->data, buf2->data) > 0)
		{
			buf2 = buf1;
			buf1 = new;
			new = *begin_list;
		}
		else
			new = new->next;
	}
}
