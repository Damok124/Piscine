/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:05:46 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/11 23:11:42 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*buf;
	t_list	*end;

	buf = begin_list;
	end = NULL;
	while (begin_list)
	{
		end = buf;
		buf = begin_list->next;
	}
	return (end);
}
