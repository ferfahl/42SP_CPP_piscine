/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:00:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 17:53:39 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// << operator overload (external to function)
std::ostream	&operator<<(std::ostream &outputFile, Fixed const &f)
{
	outputFile << f.toFloat();
	return (outputFile);
}

// = operator overload
Fixed	&Fixed::operator=( Fixed const &other )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return (*this);
}

/*
	Comparative operators
*/

// > operator overload
bool	Fixed::operator>( Fixed const &other )
{
	if (getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

// < operator overload
bool	Fixed::operator<( Fixed const &other )
{
	if (getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

// >= operator overload
bool	Fixed::operator>=( Fixed const &other )
{
	if (getRawBits() >= other.getRawBits())
		return (true);
	return (false);
}

// <= operator overload
bool	Fixed::operator<=( Fixed const &other )
{
	if (getRawBits() <= other.getRawBits())
		return (true);
	return (false);
}

// == operator overload
bool	Fixed::operator==( Fixed const &other )
{
	if (getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

// != operator overload
bool	Fixed::operator!=( Fixed const &other )
{
	if (getRawBits() != other.getRawBits())
		return (true);
	return (false);
}

/*
	Arithmetics operators
*/

// + operator overload
Fixed	Fixed::operator+( Fixed const &other )
{
	Fixed	result;

	result.setRawBits(getRawBits() + other.getRawBits());
	return (result);
}

// - operator overload
Fixed	Fixed::operator-( Fixed const &other )
{
	Fixed	result;

	result.setRawBits(getRawBits() - other.getRawBits());
	return (result);
}

// * operator overload
Fixed	Fixed::operator*( Fixed const &other )
{
	Fixed	result(toFloat() * other.toFloat());

	return (result);
}

// / operator overload
Fixed	Fixed::operator/( Fixed const &other )
{
	Fixed	result(toFloat() / other.toFloat());

	return (result);
}

// ++i operator overload
Fixed	&Fixed::operator++( void )
{
	this->_rawBits++;
	return (*this);
}

// i++ operator overload
Fixed	Fixed::operator++( int )
{
	Fixed result(*this);
	this->_rawBits++;
	return (result);
}

// --i operator overload
Fixed	&Fixed::operator--( void )
{
	this->_rawBits--;
	return (*this);
}

// i-- operator overload
Fixed	Fixed::operator--( int )
{
	Fixed result(*this);
	this->_rawBits--;
	return (result);
}

/*
	Max and min returns
*/

// A static member function min that takes as parameters two references on fixed-point numbers, and returns a reference to the smallest one.
Fixed const	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

// A static member function min that takes as parameters two references to constant fixed-point numbers, and returns a reference to the smallest one.
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

// A static member function max that takes as parameters two references on fixed-point numbers, and returns a reference to the greatest one.
Fixed const &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

// A static member function max that takes as parameters two references to constant fixed-point numbers, and returns a reference to the greatest one.
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}
