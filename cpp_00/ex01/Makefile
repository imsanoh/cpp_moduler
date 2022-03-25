NAME		=PhoneBook

SRCS		=Main.cpp PhoneBook.cpp Contact.cpp 

CPPFLAGS	=-Wall -Wextra -Werror -g3 -fsanitize=address

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
