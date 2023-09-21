NAME	=	iter

SRCS	=	main.cpp

OBJ_DIR	=	obj
OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

CC 		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

VPATH	=	./

HEADER	=	iter.hpp

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
	@echo "\n\n"
	@echo ${BPurple}"No argument test------------------------------------\033[0m"
	./convert  
	@echo "\n\n" 
	
	@echo ${BPurple}"Invalid inputs tests--------------------------------" 
	@echo "\033[0m" 
	./convert 🌊 
	./convert 🌊🌊
	./convert teste
	./convert "teste"
	./convert 'teste'
	./convert 9f
	./convert 99f
	./convert 0000r
	./convert ' '
	./convert '   '
	./convert '\n'
	./convert '\t'
	./convert '\r'
	./convert '\v'
	./convert '\b'
	./convert '\f'
	./convert '\a'
	./convert '\e'
	./convert '\0'
	./convert '\x0'
	./convert '\x0f'
	./convert " "
	./convert "   "
	@echo "\n\n"
	
	@echo ${BPurple}"Limits tests----------------------------------------"
	@echo "\033[0m"
	./convert 2147483647
	./convert -2147483648
	./convert 2147483648
	./convert -2147483649
	./convert 340282346638528859811704183484516925440.0f
	./convert -340282346638528859811704183484516925440.0000000000000000f
	./convert 340282446638528859811704183484516925455.9f
	./convert -340282446638528859811704183484516925499.9900000000000000f
	./convert 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
	./convert -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
	./convert 179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9
	./convert -179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9
	@echo "\n\n"
	
	@echo ${BPurple}"Char tests----------------------------------------"
	@echo "\033[0m"
	./convert 'A'
	./convert 'l'
	./convert 'e'
	./convert 'x'
	./convert '/'
	./convert '?'
	./convert ':'
	./convert '%'
	@echo "\n\n"
	
		
	@echo ${BPurple}"Integer tests----------------------------------------"
	@echo "\033[0m"
	./convert 0
	./convert 1
	./convert -1
	./convert 42
	./convert 65
	./convert 314
	@echo "\n\n"
	
		
	@echo ${BPurple}"Float tests----------------------------------------"
	@echo "\033[0m"
	./convert 0.0f
	./convert 1.1f
	./convert -1.1f
	./convert 42.42f
	./convert 65.56f
	./convert 3.14f
	@echo "\n\n"

		
	@echo ${BPurple}"Double tests----------------------------------------"
	@echo "\033[0m"
	./convert 0.0
	./convert 1.1
	./convert -1.1
	./convert 42.42
	./convert 65.56
	./convert 3.14
	@echo "\n\n"



	@echo ${BPurple}"Pseudo Literal tests----------------------------------------"
	@echo "\033[0m"
	./convert nan
	./convert nanf
	./convert +inf
	./convert -inf
	./convert +inff
	./convert -inff
	@echo "\n\n"


val:
	@make re
	valgrind ./$(NAME)


.PHONY: all clean fclean re 