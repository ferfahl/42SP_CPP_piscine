/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:26:20 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 21:01:52 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _numberOfElements(0)
{ }

Span::Span( unsigned int n ) : _numberOfElements( n )
{ }

Span::Span( const Span & src )
{ 
	*this = src;
}

Span::~Span()
{ }

Span &	Span::operator=( Span const & copy )
{
	if ( this != &copy )
		this->_numberOfElements = copy._numberOfElements;
	return *this;
}

unsigned int	Span::getTotal(void) const
{
	return (this->_numberOfElements);
}

void	Span::_checkIsFull(void)
{
	if (this->_set.size() == this->_numberOfElements)
		throw IsFullException();
}

void	Span::_chechIsEnoughElements(void)
{
	if ((this->_numberOfElements == 0) || (this->_set.size() <= 1))
		throw noSpanException();
}

void	Span::addNumber( int number )
{
	try
	{
		this->_checkIsFull();
		this->_set.insert(number);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Span::addNumber( std::set<int>::iterator first, std::set<int>::iterator last )
{
	try
	{
		while (first != last)
		{
			this->_checkIsFull();
			this->_set.insert(*first);
			first++;
		}
		this->_set.insert(*last);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

unsigned int Span::shortestSpan( void )
{
	int	distance = std::numeric_limits<int>::max();
	int	previousValue = distance;
	int	dif;

	_chechIsEnoughElements();
	for (std::multiset<int>::iterator it = _set.begin(); it != _set.end(); ++it) {
		dif = abs(*it - previousValue);
		if (dif < distance) 
			distance = dif;
		previousValue = *it;
	}
	return (distance);
}

unsigned int Span::longestSpan(void)
{
	_chechIsEnoughElements();
	unsigned int	first = *(_set.begin());
	unsigned int	last = *(_set.rbegin());
	return (last - first);
}

const char* Span::noSpanException::what() const throw() {
	return ("There is no Span");
}

const char* Span::IsFullException::what() const throw() {
	return ("Span is full");
}
