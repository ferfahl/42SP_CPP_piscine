NAME	=	RPN

SRCS	=	main.cpp RPN.cpp

OBJ_DIR	=	obj
OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

CC 		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

VPATH	=	./

HEADER	=	RPN.hpp

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
	./tests.sh

val:
	@make re
	valgrind ./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"

.PHONY: all clean fclean re 