NAME	=	megaphone

SRCS	=	megaphone.cpp \

OBJS= $(SRCS:.c=.o)

CC		=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98
.c.o:
		${CC} ${CFLAGS} -Iincludes -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re