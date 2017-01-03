# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2017/01/03 08:31:12 by jdesmare         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc $(FLAGS)

FLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes/

SRC =	main.c						\
		ft_fdf.c					\
		ft_reader.c					\
		ft_get_max.c				\
		ft_display.c				\
		ft_init.c					\
		ft_padding.c				\
		ft_window_size.c			\
		ft_key_event.c				\
		ft_expose_hook.c			\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft/
	@$(CC) -I$(INCLUDES) -c $(SRC)
	@$(CC) -L./libft/ -lft $^ -o $@ -lmlx -framework OpenGL -framework Appkit
	@echo "$(NAME) created successfully"

%.o: %.c
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
