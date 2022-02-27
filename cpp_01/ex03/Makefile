NAME		=ex03

SRCS		=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CPPFLAGS	=-Wall -Wextra -Werror

CXX		=c++ -std=c++98

OBJS		=${SRCS:.cpp=.o}

all			:${NAME}

${NAME}		:${OBJS}
			${CLANG} ${CPPFLAGS} -o $@ $^

clean		:
			rm -rf ${OBJS}

fclean		:clean
			rm -rf ${NAME}

re			:fclean all

.PHONY		:	all clean fclean re