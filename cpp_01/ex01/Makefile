NAME		=zombie

SRCS		=main.cpp Zombie.cpp ZombieHorde.cpp

CPPFLAGS	=-Wall -Wextra -Werror

CXX		=c++ -std=c++98

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