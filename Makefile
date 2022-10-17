# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 08:56:41 by cportuon          #+#    #+#              #
#    Updated: 2022/10/17 12:25:14 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_putnbru.c ft_printf.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
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
