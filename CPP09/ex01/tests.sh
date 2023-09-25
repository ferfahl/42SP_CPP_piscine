BIN=RPN

make

if [ $? -eq 0 ]; then
	echo
	echo "\033[38;5;11mNo argument \e[0m "
	./$BIN 
	echo

	echo
	echo "\033[38;5;11mWrong nbr arguments \e[0m "
	./$BIN "1 2 +" "3 8 -"
	echo

	echo
	echo "\033[38;5;11mInvalid inputs \e[0m "
	echo "\e[32mExpressão: ' ' \e[0m "
	echo "\e[32mResultado esperado: Error \e[0m"
	echo "Resultado: "
	./$BIN " "
	echo

	echo
	echo "\e[32mExpressão: '\0' \e[0m "
	echo "\e[32mResultado esperado: Error \e[0m"
	echo "Resultado: "
	./$BIN "\0"
	echo

	echo
	echo "\033[38;5;11mPDF Tests \e[0m "
	echo "\e[32mExpressão: 8 9 * 9 - 9 - 9 - 4 - 1 + \e[0m "
	echo "\e[32mResultado esperado: 42 \e[0m"
	echo "Resultado: "
	./$BIN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	echo

	echo "\e[32mExpressão: 7 7 * 7 - \e[0m"
	echo "\e[32mResultado esperado: 42 \e[0m"
	echo "Resultado: "
	./$BIN "7 7 * 7 -"
	echo

	echo "\e[32mExpressão: 1 2 * 2 / 2 * 2 4 - + \e[0m"
	echo "\e[32mResultado esperado: 0 \e[0m"
	echo "Resultado: "
	./$BIN "1 2 * 2 / 2 * 2 4 - +"
	echo

	echo "\e[32mExpressão: (1 + 1) \e[0m"
	echo "\e[32mResultado esperado: Error \e[0m"
	echo "Resultado: "
	./$BIN "(1 + 1)"
	echo

	echo "\033[38;5;11mValid tests \e[0m"
	echo "\e[32mExpressão: 5 1 2 + 4 * + 3 - \e[0m"
	echo "\e[32mResultado esperado: 14 \e[0m"
	echo "Resultado: "
	./$BIN "5 1 2 + 4 * + 3 -"
	echo

	echo "\e[32mExpressão: 5 2 - + \e[0m"
	echo "\e[32mResultado esperado: Error \e[0m"
	echo "Resultado: "
	./$BIN "5 2 - +"
	echo

	echo "\e[32mExpressão: 5 2 - \e[0m"
	echo "\e[32mResultado esperado: 3 \e[0m"
	echo "Resultado: "
	./$BIN "5 2 -"
	echo

	echo "\e[32mExpressão: 5 2 *\e[0m"
	echo "\e[32mResultado esperado: 10 \e[0m"
	echo "Resultado: "
	./$BIN "5 2 *"
	echo

	echo "\e[32mExpressão: 8 4 * 9 + 4 2 / 6 1 - + * \e[0m"
	echo "\e[32mResultado esperado: 287 \e[0m"
	echo "Resultado: "
	./$BIN "8 4 * 9 + 4 2 / 6 1 - + *"
	echo

	echo "\033[38;5;11mError tests \e[0m"
	echo "\e[32mExpressão: 5 - \e[0m"
	echo "\e[32mResultado esperado: Error \e[0m"
	echo "Resultado: "
	./$BIN "5 -"
	echo

	echo "\e[32mExpressão: 7 8 * 4 0 / \e[0m"
	echo "\e[32mResultado esperado: Error \e[0m"
	echo "Resultado: "
	./$BIN "7 8 * 4 0 / 7 + 9 6 + -"
	echo

	make fclean
else
	echo "Compilation error."
fi