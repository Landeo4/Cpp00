NAME	=	main.c

SRCS	=	main.cpp \

OBJS= $(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98

.c.o:
		${CC} ${CFLAGS} -c -o ${<:.c=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re