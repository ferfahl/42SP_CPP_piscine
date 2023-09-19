/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertionTypeDef.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:12:04 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 23:36:56 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

static bool	ScalarConvertion::_isCharValid( std::string str )
{
	if ((str.length() == 1) && (str[0] >= 48 && str[0] <= 57))
		return (true);
	return (false);
}

bool	isdigit(int c)
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

static bool	ScalarConvertion::_isDoubleValid( std::string str )
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
		if (!isdigit(str[i]))
			return (false);
		else if (str[i] == '.' && oneDot)
			return (false);
		else if (str[i] == '.')
			oneDot = true;
		i++;
	}
	if (!oneDot)
		return (false);
	return (true);
}

static bool	ScalarConvertion::_isFloatValid( std::string str )
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
		if (&& !isdigit(str[i]))
			return (false);
		else if (str[i] == '.' && oneDot)
			return (false);
		else if (str[i] == '.')
			oneDot = true;
		i++;
	}
	if (str[str.length() - 1] != 'f' || !oneDot)
		return (false);
	return (true);
}

static bool	ScalarConvertion::_isNumericValid( std::string str )
{
	size_t	i;

	i = 0;
	if (!str[0])
		return (false);
	if (signValid(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (!_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	ScalarConvertion::_isPseudoLiteral( std::string str )
{
	if (str == "+inf" || str == "-inf"|| str == "nan" || str == "+inff"
		|| str == "-inff" || str == "nanf")
		return (true);
	return (false);
}
