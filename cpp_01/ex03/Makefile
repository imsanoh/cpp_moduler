NAME		=zombie

SRCS		=main.cpp HumanA.cpp HumanB.cpp Weaphon.cpp

CPPFLAGS	=-Wall -Wextra -Werror

CLANG		=clang++

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