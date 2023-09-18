NAME	=	ratherHaveCoffee

SRCS	=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ_DIR	=	obj
OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

CC 		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -Wshadow -Wno-shadow

VPATH	=	./

HEADER	=	Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

INCLUDE	=	-I ./ -I ./includes

all:		$(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

$(OBJ_DIR):
	mkdir -p $@

clean:
			rm -rf obj

fclean:		clean
			rm -f $(NAME)

re:			fclean all

run:
	@make re
	./$(NAME)

val:
	@make re
	valgrind ./$(NAME)


.PHONY: all clean fclean re 