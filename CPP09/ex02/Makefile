NAME	=	PmergeMe

SRCS	=	main.cpp PmergeMe.cpp

OBJ_DIR	=	obj
OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

CC 		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

VPATH	=	./

HEADER	=	PmergeMe.hpp

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
	./$(NAME) `shuf -i 1-10000 -n 300 | tr "\n" " "`

val:
	@make re
	valgrind ./$(NAME) "7 8 27 100 11 46 2 53 0 9 42 15 21"

.PHONY: all clean fclean re 

# ./PmergeMe `shuf -i 1-10000 -n 10000 | tr "\n" " "`
# ./PmergeMe `shuf -i 1-10000 -n 3000 | tr "\n" " "`
# ./PmergeMe `shuf -i 1-1000 -n 100 | tr "\n" " "`
# ./PmergeMe 3 5 9 7 4
# ./PmergeMe 7 8 27 100 11 46 2 53 0 9 42 15 21
# ./PmergeMe 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20