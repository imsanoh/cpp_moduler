NAME		=ex05

SRCS		=main.cpp Karen.cpp

CXXFLAGS	=-Wall -Wextra -Werror

CXX		=c++

OBJS		=${SRCS:.cpp=.o}

all			:${NAME}

${NAME}		:${OBJS}
			${CXX} ${CXXFLAGS} -o $@ $^

clean		:
			rm -rf ${OBJS}

fclean		:clean
			rm -rf ${NAME}

re			:fclean all

.PHONY		:	all clean fclean re
