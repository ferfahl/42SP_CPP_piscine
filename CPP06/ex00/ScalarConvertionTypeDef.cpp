/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertionTypeDef.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:12:04 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 17:17:04 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"

bool	checkIntLimit( double d )
{
	return (d > (double)(std::numeric_limits<int>::max())
		|| d < (double)(std::numeric_limits<int>::min()));
}

void	ScalarConvertion::_validateInt( const double d )
{
	if (checkIntLimit(d))
		throw ScalarConvertion::IntOverflow();
}

bool	checkFloatLimit( double d )
{
	float max = std::numeric_limits<float>::max();

	return (d > (double)(max) || d < -(double)(max) - 1.0);
}

void	ScalarConvertion::_validateFloat( const double d )
{
	if (checkFloatLimit(d))
		throw ScalarConvertion::FloatOverflow();
}

bool	ScalarConvertion::_isCharValid( std::string str )
{
	if ((str.length() == 1) && (str[0] >= 33 && str[0] <= 126))
		return (true);
	return (false);
}

bool	isDigitCheck(int c)
{
	if (c > 47 && c < 58)
		return (true);
	return (false);
}

bool	signValid(char c)
{
	if (c == '+' || c == '-')
		return (true);
	return (false);
}

bool	ScalarConvertion::_isDoubleValid( std::string str )
{
	size_t	i;
	bool	oneDot;

	i = 0;
	oneDot = false;
	if (!str[0])
		return (false);
	if (signValid(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != '.' && !isDigitCheck(str[i]))
			return (false);
		if (str[i] == '.' && oneDot)
			return (false);
		if (str[i] == '.')
			oneDot = true;
		i++;
	}
	if (!oneDot)
		return (false);
	return (true);
}

bool	ScalarConvertion::_isFloatValid( std::string str )
{
	size_t	i;
	bool	oneDot;

	i = 0;
	oneDot = false;
	if (!str[0])
		return (false);
	if (signValid(str[i]))
		i++;
	while (str[i + 1] != '\0')
	{
		if (str[i] != '.' && !isDigitCheck(str[i]))
			return (false);
		if (str[i] == '.' && oneDot)
			return (false);
		if (str[i] == '.')
			oneDot = true;
		i++;
	}
	if (str[i] != 'f' || !oneDot)
		return (false);
	return (true);
}

bool	ScalarConvertion::_isIntValid( std::string str )
{
	size_t	i;

	i = 0;
	if (!str[0])
		return (false);
	if (signValid(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (!isDigitCheck(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ScalarConvertion::_isPseudoLiteral( std::string str )
{
	if (str == "+inf" || str == "-inf"|| str == "nan" || str == "+inff"
		|| str == "-inff" || str == "nanf")
		return (true);
	return (false);
}
