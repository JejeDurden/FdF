# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2016/12/07 07:48:09 by jdesmare         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc -g $(FLAGS)

FLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes/

SRC =	main.c						\
		ft_fdf.c					\
		ft_reader.c					\
		ft_get_y.c					\
		ft_display.c				\

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft/
	@$(CC) -I$(INCLUDES) -c $(SRC)
	@$(CC) -L./libft/ -lft $^ -o $@ -lmlx -framework OpenGL -framework Appkit
	@echo "$(NAME) created successfully"

$(OBJ): $(SRC)
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
