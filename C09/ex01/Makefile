# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 17:12:24 by zharzi            #+#    #+#              #
#    Updated: 2022/07/07 00:25:09 by zharzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c \
./srcs/ft_putstr.c \
./srcs/ft_strcmp.c \
./srcs/ft_strlen.c \
./srcs/ft_swap.c

HEADER = ft.h

HEADERDIR = includes/

OBJ = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

IFLAG = -I$(HEADERDIR)

all : libft.a

%.o : %.c
	$(CC) $(FLAGS) $(IFLAG) -o $@ -c $^

libft.a : $(OBJ) $(HEADERDIR)$(HEADER)
	ar -rcs $(NAME) $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
