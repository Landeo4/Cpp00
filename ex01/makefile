NAME	=	Phonebook

SRCS	=	main.cpp \
			Contact.cpp \
			PhoneBook_class.cpp \

OBJS= $(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98

.cpp.o:
		${CC} ${CFLAGS} -cpp -o ${<:.cpp=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re