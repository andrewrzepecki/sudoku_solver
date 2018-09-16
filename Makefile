# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 10:14:17 by anrzepec          #+#    #+#              #
#    Updated: 2018/08/20 16:07:23 by anrzepec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	sudoku_solver

SRC 	= 	$(wildcard srcs/*.c main.c)

OBJS	=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	+=  -Werror -Wall -Wextra

INCL	=	Iincludes

RM		=	rm -f

all		: 	$(NAME)

%.o		: 	%.c	
			$(CC) $(CFLAGS) -c $< -o $@ -$(INCL)

$(NAME)	:	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
