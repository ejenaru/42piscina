NAME	= bsq
SRCS	= main.c print.c 
OBJS	= ${SRCS:.c=.o}
HEADER	= libreriah.h

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${SRCS}
			${CC} -c ${CFLAGS} ${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		clean
			fclean
			all
			re