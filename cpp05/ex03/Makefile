SRC = ./main.cpp ./Bureaucrat.cpp ./Form.cpp ./PresidentialPardonForm.cpp ./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp ./Intern.cpp

NAME = bureaucrat_02

HEADER = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp Intern.hpp

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
