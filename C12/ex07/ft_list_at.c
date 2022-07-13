/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:59:52 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/12 12:04:59 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (begin_list)
	{
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (NULL);
}
