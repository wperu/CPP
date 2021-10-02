SRC = ./main.cpp 

NAME = indentifyclass

CXX = clang++

OBJS = $(SRC:.cpp=.o)

CPPFLAGS =  -Wall -Wextra -Werror -fsanitize=address -std=c++98

RM =	rm -f

%.cpp%.o: $(CXX) $(CPPFLAGS) -cpp $< -o $o

$(NAME): ${OBJS} 
			${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}


all: $(NAME)


clean: 
	${RM} ${OBJS}

fclean: clean
				${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
