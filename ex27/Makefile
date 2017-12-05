# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 21:23:52 by jagarcia          #+#    #+#              #
#    Updated: 2017/11/08 03:21:16 by jagarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME2 = ft_display_file

SRC = ft_putchar.c ft_putstr.c

SRC_PATH = ./srcs

SOURCES = $(SRC:%.c=$(SRC_PATH)/%.c)
	
all: $(NAME)

$(NAME):
	@gcc -Iincludes -c $(SOURCES)
	@ar rc $(NAME) ft_putchar.o ft_putstr.o
	@gcc -Iincludes $(NAME2).c -L. -lft -o $(NAME2) 

clean:	
	@rm -f ft_putchar.o ft_putstr.o

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME2)

re:	fclean
	@make
