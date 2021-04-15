# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 11:06:58 by idiaz-fo          #+#    #+#              #
#    Updated: 2021/04/15 13:54:54 by idiaz-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCFOLDER = ./src/

NAME = libft.a

SRCS = 	ft_atoi.c \
		ft_strlen.c

OBJ = $(SRCS:.c=.o) #los objetos que necesito para crear se llaman como los .c pero con .o

HEADER = libft.h #la librería propiamente dicha

all: $(NAME)

$(NAME): #crea el objeto libft.a compilando el header y los objetos
	$(CC) $(FLAGS) -c -I $(HEADER) $(addprefix $(SRCFOLDER),$(SRCS))
	#crea todos los objetos -c de cada uno de los sources, pero no los linkea, o sea que crea una pechá de objetos ahi
	ar rcs $(NAME) $(OBJ) 
#ar crea con los *.o un archivo llamado NAME que es una colección (uno detrás de otro ahi to pegao) //ar [OPTIONS] archive_name member_files
#An archive is a single file holding a collection of other files
#r hace que reemplace el existente o inserte un archivo nuevo si no existe. Permite insertar algo si no está dentro ya. d elimina algo que está dentro
#c elimina el mensaje que sale
#s crea un índex de los símbolos que existen, si ponemos este comando, el ranlib de detrás no debería ser util
	#ranlib $(NAME) #  generates an index to the contents of an archive and it will be stored in the archive // ar -s debería hacer lo msimo

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)
	
re: fclean all

.PHONY: clean fclean re all #se pone aqui todos los target que NO tienen un archivo de salida que se llame igual que el target
