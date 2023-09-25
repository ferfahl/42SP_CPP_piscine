/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:18:24 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 13:43:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Constructors / Destructors */

RPN::RPN() : _stack(), _divByZero(false)
{ }

RPN::RPN( const RPN & copy )
{ 
	*this = copy;
}

RPN::~RPN()
{ }

RPN &RPN::operator=( RPN const & copy )
{
	(void)copy;
	return *this;
}

/* Checkers */

bool	RPN::isOperator(const std::string& str)
{
	return (str.size() == 1 && (str[0] == '-' || str[0] == '+' || str[0] == '*' || str[0] == '/'));
}

/* Methods */

void	RPN::endResultOfExpression( int quantityOfOperators, int  quantityOfNumbers )
{
	if (quantityOfOperators == quantityOfNumbers - 1 && quantityOfNumbers >= 2 && _stack.size() == 1 && _divByZero == false) 
		std::cout << _stack.top() << std::endl;
	else 
		std::cout << "Error: invalid expression." << std::endl;
	
}

bool	RPN::addTokenToStack( std::string strToken )
{
	int	token;

	token = std::atof(strToken.c_str());
	if (token > 9 || token < 0) 
		return (false);
	_stack.push(token);
	return (true);
}

float	RPN::operation(float a, float b, char mathOperator)
{
	switch(mathOperator)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			if (b == 0)
				_divByZero = true;
			return a / b;
		default:
			return 0;
	}
}

int	RPN::executeMathOperation(char mathOperator)
{
	int	n1, n2, result;

	n1 = _stack.top();
	_stack.pop();
	n2 = _stack.top();
	_stack.pop();
	result = operation(n2, n1, mathOperator);
	_stack.push(result);
	return (0);
}

int	RPN::mathematicalOperationInvertedPolish( std::string input )
{
	std::istringstream	iss(input);
	std::string			strToken;
	int 				quantityOfOperators = 0;
	int 				quantityOfNumbers = 0;

	while (std::getline(iss, strToken, ' '))
	{
		if (strToken.empty()) 
			continue;
		if (isOperator(strToken) && _stack.size() >= 2) {
			if (executeMathOperation(strToken[0]))
				return (0);
			quantityOfOperators++;
		} 
		else 
		{
			if (!addTokenToStack(strToken))
				return (0);
			quantityOfNumbers++;
		}
	}
	endResultOfExpression(quantityOfOperators, quantityOfNumbers);
	return (1);
}

int	RPN::invertedPolish( char **input )
{
	if (!mathematicalOperationInvertedPolish(input[1]))
		throw RPN::ImpossibleOperation();
	return (0);
}

const char *RPN::ImpossibleOperation::what() const throw() {
	return ("Error: impossible operation");
}
