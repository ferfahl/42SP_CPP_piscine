/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertionConvert.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:05:04 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 16:18:51 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"

std::string	ScalarConvertion::_convertFloatPseudo( std::string str )
{
	if (str == "nan" || str == "+inf" || str == "-inf")
		str.append("f");
	return (str);
}

std::string	ScalarConvertion::_convertDoublePseudo( std::string str )
{
	if (str == "nanf")
		str = "nan";
	else if (str == "+inff")
		str = "+inf";
	else if (str == "-inff")
		str = "-inf";
	return (str);
}

void	ScalarConvertion::_convertChar( const std::string &str )
{
	std::string	convert;
	
	char c = static_cast<char>(str[0]);
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	convert = c;
	_printConversions(convert, i, f, d, 1);
}

bool	isCharPrintable( char c )
{
	if (c >= 33 && c <= 126)
		return (true);
	return (false);
}

void	ScalarConvertion::_convertInt( const std::string  &str )
{
	std::string			convert;
	std::stringstream	ss;
	int					i;

	ss << str;
	ss >> i;
	char c = static_cast<char>(i);
	if (isCharPrintable(c))
		convert = c;
	else if (i > 128)
		convert = "Out of range";
	else
		convert = "Non displayable";
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	_printConversions(convert, i, f, d, 1);
}

int	getPrecision( const std::string&str )
{
	int		i;
	int		j;
	bool	dot;

	dot = false;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!dot && str[i] == '.')
			dot = true;
		else if (dot && str[i] != 'f' && str[i] != '.')
			j++;
		i++;
	}
	return (j);
}

void	ScalarConvertion::_convertFloat( const std::string&str )
{
	std::string			convert;
	std::stringstream	ss;
	int					precision;
	float				f;

	ss << str;
	ss >> f;

	precision = getPrecision(str);

	int i = static_cast<int>(f);
	char c = static_cast<char>(i);
	if (isCharPrintable(c))
		convert = c;
	else if (i > 128)
		convert = "impossible";
	else
		convert = "Non displayable";
	double d = static_cast<double>(f);
	_printConversions(convert, i, f, d, precision);
}

void	ScalarConvertion::_convertDouble( const std::string&str )
{
	std::cout
		<< "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: " << _convertFloatPseudo(str) << std::endl
		<< "double: " << _convertDoublePseudo(str) << std::endl;
}
