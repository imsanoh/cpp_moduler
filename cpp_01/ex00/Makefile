NAME		=zombie

SRCS		=main.cpp NewZombie.cpp RandomChump.cpp Zombie.cpp

CPPFLAGS	=-Wall -Wextra -Werror

CLANG		=g++

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