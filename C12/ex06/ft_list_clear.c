/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 03:03:28 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/12 11:58:16 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*buf;

	buf = begin_list;
	while (buf)
	{
		buf = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = buf;
	}
}
