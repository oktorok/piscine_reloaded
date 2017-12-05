# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 21:23:52 by jagarcia          #+#    #+#              #
#    Updated: 2017/11/08 00:23:47 by jagarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


SRC_PATH = ./srcs

SOURCES = $(SRC:%.c=$(SRC_PATH)/%.c)
	
all: $(NAME)

$(NAME):
	@gcc -Iincludes -c $(SOURCES)
	@ar rc $(NAME) $(OBJ)
clean:	
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean
	@make
