/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertionConvert.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:05:04 by feralves          #+#    #+#             */
/*   Updated: 2023/09/19 18:00:48 by feralves         ###   ########.fr       */
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
