/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:22:48 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 00:02:43 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), \
void (*free_fct)(void *))
{
	t_list	*buf;

	buf = *begin_list;
	while (buf)
	{
		buf = *begin_list;
		if ((cmp)(buf->data, data_ref) == 0)
		{
			(free_fct)(buf->data);
			free(buf);
			buf = buf->next;
		}
		else
			buf = buf->next;
	}
}
