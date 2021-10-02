SRC = ./main.cpp ./Dog.cpp ./Cat.cpp ./Animal.cpp ./Brain.cpp

NAME = animal

HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

CXX = clang++

OBJS = $(SRC:.cpp=.o)

CPPFLAGS =  -Wall -Wextra -Werror -fsanitize=address -std=c++98

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
