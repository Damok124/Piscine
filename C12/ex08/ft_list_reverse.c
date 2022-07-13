/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:06:54 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/13 10:23:09 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list			*buf0;
	t_list			*buf1;
	t_list			*buf2;

	buf0 = NULL;
	buf1 = *begin_list;
	while (buf1->next)
	{
		buf2 = buf1->next;
		if (buf0 == NULL)
			buf1->next = NULL;
		else
			buf1->next = buf0;
		buf0 = buf1;
		buf1 = buf2;
		if (buf2->next)
			buf2 = buf2->next;
	}
}
