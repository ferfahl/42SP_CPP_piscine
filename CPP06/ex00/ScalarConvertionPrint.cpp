/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertionPrint.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:21:05 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 17:53:32 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"

void	ScalarConvertion::_printConversions( std::string c )
{
	std::cout
		<< "char: " << c << std::endl
		<< "int: " << c << std::endl
		<< "float: " << c << std::endl
		<< "double: " << c << std::endl;
}

void	ScalarConvertion::_printConversions( std::string c, int i, float f, double d, int precision )
{
	std::cout
		<< "char: " << c << std::endl
		<< "int: " << i << std::endl
		<< std::fixed << std::setprecision(precision)
		<< "float: " << f << "f" << std::endl
		<< std::fixed << std::setprecision(precision)
		<< "double: " << d << std::endl;
}

void	ScalarConvertion::_printConversions( std::string c, std::string i, float f, double d, int precision )
{
	std::cout
		<< "char: " << c << std::endl
		<< "int: " << i << std::endl
		<< std::fixed << std::setprecision(precision)
		<< "float: " << f << "f" << std::endl
		<< std::fixed << std::setprecision(precision)
		<< "double: " << d << std::endl;
}

void	ScalarConvertion::_printConversions( std::string c, std::string i, std::string f, double d, int precision )
{
	std::cout
		<< "char: " << c << std::endl
		<< "int: " << i << std::endl
		<< std::fixed << std::setprecision(precision)
		<< "float: " << f << std::endl
		<< std::fixed << std::setprecision(precision)
		<< "double: " << d << std::endl;
}

void	ScalarConvertion::_printPseudo( std::string str )
{
	std::cout
		<< "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: " << _convertFloatPseudo(str) << std::endl
		<< "double: " << _convertDoublePseudo(str) << std::endl;
}
