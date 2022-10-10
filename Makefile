# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 08:56:41 by cportuon          #+#    #+#              #
#    Updated: 2022/10/05 11:31:17 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	@echo "Library comiled"

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	@echo ".o files removed"

clean:
	@rm -f $(OBJ)
	@echo "Library removed"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
