/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:40:29 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/12 02:53:13 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*buf;
	int		i;

	i = -1;
	list = NULL;
	while (++i < size)
	{
		buf = list;
		list = ft_create_elem(strs[i]);
		if (!list)
			return (NULL);
		list->next = buf;
	}
	return (list);
}
