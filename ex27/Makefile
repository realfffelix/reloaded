# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 16:26:08 by fdubois           #+#    #+#              #
#    Updated: 2018/11/04 17:31:54 by fdubois          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror
NAME = ft_display_file
SRC = display_file.c
OBJ = display_file.o

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
