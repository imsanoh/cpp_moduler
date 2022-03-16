NAME		=Animal

SRCS		=Animal.cpp Dog.cpp Cat.cpp main.cpp

CPPFLAGS	= -Wall -Wextra -Werror

CXX		=c++

OBJS		=${SRCS:.cpp=.o}

all			:${NAME}

${NAME}		:${OBJS}
			${CXX} ${CPPFLAGS} -o $@ $^

clean		:
			rm -rf ${OBJS}

fclean		:clean
			rm -rf ${NAME}

re			:fclean all

.PHONY		:	all clean fclean re