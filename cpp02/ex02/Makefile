SRC = ./main.cpp ./Fixed.cpp

NAME = fixed

CXX = clang++

OBJS = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM =	rm -f

%.cpp%.o: $(CXX) $(CPPFLAGS) -cpp $< -o $o

$(NAME): ${OBJS} ${HEADER} 
			${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}


all: $(NAME)


clean: 
	${RM} ${OBJS}

fclean: clean
				${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
