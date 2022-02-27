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

<<<<<<< HEAD
.PHONY		:	all clean fclean re
=======
.PHONY		:	all clean fclean re
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
