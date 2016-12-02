# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2016/12/02 13:56:19 by jdesmare         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc $(FLAGS)

FLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes/

SRC =	main.c						\

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft/
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRC)
	@$(CC) -L./libft/ -lft $^ -o $@
	@echo "$(NAME) created successfully"

$(OBJ)%.o: $(SRC)%.c
	@$(CC) -o $@ -c $<

clean:
	@make clean -C ./libft/
	@echo "Erasing .o files..."
	@rm -fv $(OBJ)
	@echo "Done."

fclean: clean
	@make fclean -C ./libft/
	@echo "Erasing $(NAME)..."
	@rm -f $(NAME)
	@echo "Done."

re: fclean all clean

.PHONY: all, clean, fclean, re
