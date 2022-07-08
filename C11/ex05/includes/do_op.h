/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:57:27 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/08 18:00:51 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_multi(int a, int b);
int		ft_mod(int a, int b);
int		ft_def_op(char *hs, char *nd);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_do_op(int a, int b, int o, int (**ft)(int, int));

#endif
