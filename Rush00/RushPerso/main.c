/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:15:36 by zharzi            #+#    #+#             */
/*   Updated: 2022/01/16 11:56:01 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	argc = 0;
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
