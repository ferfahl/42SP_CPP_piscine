/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertionPrint.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:21:05 by feralves          #+#    #+#             */
/*   Updated: 2023/09/19 16:48:03 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"

void	ScalarConvertion::_printChar( const std::string &str )
{
	(void)str;
	std::cout << "Char\n";
}

void	ScalarConvertion::_printInt( const std::string  &str )
{
	(void)str;
	std::cout << "Int\n";
}

void	ScalarConvertion::_printFloat( const std::string&str )
{
	(void)str;
	std::cout << "Float\n";
}

void	ScalarConvertion::_printDouble( const std::string&str )
{
	(void)str;
	std::cout << "Double\n";
}

void	ScalarConvertion::_printPseudo( std::string str )
{
	std::cout 
		<< "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: " << _convertFloatPseudo(str) << std::endl
		<< "double: " << _convertDoublePseudo(str) << std::endl;
}