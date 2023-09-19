NAME	=	converter

SRCS	=	main.cpp ScalarConvertion.cpp ScalarConvertionTypeDef.cpp

OBJ_DIR	=	obj
OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

CC 		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

VPATH	=	./

HEADER	=	ScalarConvertion.hpp

INCLUDE	=	-I ./ -I ./includes

ARGS	=	a

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
	./$(NAME) $(ARGS)

val:
	@make re
	valgrind ./$(NAME)


.PHONY: all clean fclean re 