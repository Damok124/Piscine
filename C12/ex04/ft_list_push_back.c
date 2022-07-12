/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:15:03 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/12 00:39:04 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	while (*begin_list)
	{
		if ((*begin_list)->next == NULL)
			(*begin_list)->next = new;
		else
			*begin_list = (*begin_list)->next;
	}
}
