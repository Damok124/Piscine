# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 17:12:24 by zharzi            #+#    #+#              #
#    Updated: 2022/07/08 14:30:44 by zharzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libdo-op.a

BINARY = do-op

SRCSDIR = ./srcs/

SRCS = $(SRCSDIR)ft_add.c \
	$(SRCSDIR)ft_sub.c \
	$(SRCSDIR)ft_div.c \
	$(SRCSDIR)ft_multi.c \
	$(SRCSDIR)ft_mod.c \
	$(SRCSDIR)ft_atoi.c \
	$(SRCSDIR)ft_def_op.c \
	$(SRCSDIR)ft_do_op.c \
	$(SRCSDIR)ft_putnbr.c

HEADERDIR = includes/

HEADER = do_op.h

OBJ = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

IFLAG = -I$(HEADERDIR)

all : libdo-op.a
	-@$(CC) $(FLAGS) main.c $(IFLAG) -L. -ldo-op -o $(BINARY)

%.o : %.c
	-@$(CC) $(FLAGS) $(IFLAG) -o $@ -c $^

libdo-op.a : $(OBJ) $(HEADERDIR)$(HEADER)
	-@ar -rcs $(NAME) $^

clean :
	-@rm -f $(OBJ)

fclean : clean
	-@rm -f $(NAME)
	-@rm -f $(BINARY)

re : fclean all

.PHONY : all clean fclean re
