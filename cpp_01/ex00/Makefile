NAME		=zombie

SRCS		=main.cpp Zombie.cpp NewZombie.cpp RandomChump.cpp

CPPFLAGS	=-Wall -Wextra -Werror -g3 -fsanitize=address

CXX		=c++

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