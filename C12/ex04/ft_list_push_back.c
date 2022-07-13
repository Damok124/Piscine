/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:15:03 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 10:55:32 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*buf;

	new = ft_create_elem(data);
	buf = *begin_list;
	while (buf && buf != new)
	{
		if (buf->next == NULL)
			buf->next = new;
		buf = (buf)->next;
	}
}
