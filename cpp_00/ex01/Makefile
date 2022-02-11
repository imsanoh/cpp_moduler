NAME		=megaphone

SRCS		=Main.cpp Contact.cpp PhoneBook.cpp

CPPFLAGS	=-Wall -Wextra -Werror

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