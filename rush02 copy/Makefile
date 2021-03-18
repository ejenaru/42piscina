NAME = rush-02
GFLAGS = -Wall -Werror -Wextra
FN = main.c errors.c print.c read_dict.c numeros2.c numbers2.c
OBJS = main.o errors.o print.o read_dict.o numeros2.o numbers2.o

$(NAME): $(OBJS)
	cc $(GFLAGS) -o $(NAME) $(OBJS)

read: read_dict.c library.h
	cc $(GFLAGS) -c read_dict.c

all: $(FN) library.h
	cc $(GFLAGS) -c $(FN)

clean:
	rm *.o 

fclean:
	rm $(NAME) *.o

re: fclean all