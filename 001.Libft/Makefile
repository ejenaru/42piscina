# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 11:06:58 by idiaz-fo          #+#    #+#              #
#    Updated: 2021/04/07 14:04:56 by idiaz-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

MAIN = main.c

SRCS = ft_atoi.c 

OBJ = $(SRC:.c=.o) #los objetos que necesito para compilar el main son los .c pero con .o

HEADER = libft.h #la librería propiamente dicha

all: $(NAME)

$(NAME): $(MAIN) $(OBJ)#crea el objeto libft.a compilando el header y los objetos
	$(CC) $(FLAGS) -o $(NAME) -I $(HEADER) $(MAIN) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)
	
re: fclean all

.PHONY: clean fclean all