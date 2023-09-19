/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:15 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 23:12:37 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"


ScalarConvertion::ScalarConvertion() : _name("Vogon"), _grade(75)
{
	std::cout << "ScalarConvertion default constructor called" << std::endl;
	return ;
}

ScalarConvertion::ScalarConvertion(const ScalarConvertion& copy)
{
	std::cout << "ScalarConvertion, copy constructor called" << std::endl;
	(void)copy;
	return ;
}

ScalarConvertion::~ScalarConvertion()
{
	std::cout << "ScalarConvertion, destructor called" << std::endl;
	return ;
}

ScalarConvertion &ScalarConvertion::operator=(ScalarConvertion const &copy)
{
	std::cout << "ScalarConvertion, copy assignment operator called" << std::endl;
	return (*this);
}

static void	ScalarConvertion::_convertChar( const std::string &str )
{
	//
}

static void	ScalarConvertion::_convertInt( const std::string  &str )
{
	//
}

static void	ScalarConvertion::_convertFloat( const std::string&str )
{
	//
}

static void	ScalarConvertion::_convertDouble( const std::string&str )
{
	//
}

static void	ScalarConvertion::_printPseudo( const std::string&str )
{
	//
}


int	ScalarConvertion::_getInputType( srd::string value )
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
	int	type;
	
	type = _getInputType(literal);
	switch (type)
	{
	case PSEUDO_LITERAL:
		_printPseudo(literal);
		break;
	case CHAR:
		_convertChar(literal);
		break;
	case INT:
		_convertInt(literal);
		break;
	case FLOAT:
		_convertFloat(literal);
		break;
	case DOUBLE:
		_convertDouble(literal);
		break;
	default:
		throw Validation::NotValidType();
		break;
	}
	_printConversions();
}

const char* ScalarConvertion::NotValidType::what() const throw() {
	return ("Value is not a required type from the subject");
}


