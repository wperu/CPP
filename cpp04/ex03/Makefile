SRC = ./main.cpp ./AMateria.cpp ./Cure.cpp ./Ice.cpp ./Character.cpp ./MateriaSource.cpp

NAME = simu

HEADER = AMateria.hpp Character.hpp Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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
