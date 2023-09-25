/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:26:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 13:40:32 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	isValidExpressionFormat( const std::string& valueStr, std::string numberMap ) 
{
	if (valueStr.find_first_not_of(numberMap) != std::string::npos)
		return (false);
	return (true);
}

bool	checkArguments( int argc, char **input )
{
	if (argc != 2)
		return (std::cout << "Error: invalid number of arguments." << std::endl, false);
	if (!isValidExpressionFormat(input[1], "0123456789+-/* "))
		return (std::cout << "Error: invalid expression." << std::endl, false);
	return (true);
}

int	main( int argc, char* argv[] )
{
	if (argc == 1)
	{
		std::cout << "Error: missing inverted Polish expression" << std::endl;
		return (1);
	}
	if (!checkArguments(argc, argv))
		return (1);
	try
	{
		RPN	rpn;

		rpn.invertedPolish(argv);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}