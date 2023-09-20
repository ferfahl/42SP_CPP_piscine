/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:15 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 17:04:51 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"


ScalarConvertion::ScalarConvertion()
{
	std::cout << "ScalarConvertion default constructor called" << std::endl;
	return ;
}

ScalarConvertion::ScalarConvertion(const ScalarConvertion& copy)
{
	(void)copy;
	std::cout << "ScalarConvertion, copy constructor called" << std::endl;
	return ;
}

ScalarConvertion::~ScalarConvertion()
{
	std::cout << "ScalarConvertion, destructor called" << std::endl;
	return ;
}

ScalarConvertion &ScalarConvertion::operator=(ScalarConvertion const &copy)
{
	(void)copy;
	std::cout << "ScalarConvertion, copy assignment operator called" << std::endl;
	return (*this);
}

int	ScalarConvertion::_getInputType( std::string value )
{
	if (_isDoubleValid(value))
		return (DOUBLE);
	else if (_isFloatValid(value))
		return (FLOAT);
	else if (_isIntValid(value))
		return (INT);
	else if (_isCharValid(value))
		return (CHAR);
	else if (_isPseudoLiteral(value))
		return (PSEUDO_LITERAL);
	else
		return (-1);
}

void	ScalarConvertion::convert( std::string value )
{
	int		type;
	double	check;
	std::stringstream	ss;

	ss << value;
	ss >> check;
	
	type = _getInputType(value);
	switch (type)
	{
	case PSEUDO_LITERAL:
		_printPseudo(value);
		break;
	case CHAR:
		_convertChar(value);
		break;
	case INT:
		_validateInt(check);
		_convertInt(value);
		break;
	case FLOAT:
		_validateFloat(check);
		_convertFloat(value);
		break;
	case DOUBLE:
		_convertDouble(value);
		break;
	default:
		throw ScalarConvertion::NotValidType();
		break;
	}
}

const char* ScalarConvertion::NotValidType::what() const throw() {
	return ("Value is not a required type from the subject");
}

const char* ScalarConvertion::IntOverflow::what() const throw() {
	return ("Value exceeds the maximum or minimum integer limits");
}

const char* ScalarConvertion::FloatOverflow::what() const throw() {
	return ("Value exceeds the maximum or minimum float limits");
}
