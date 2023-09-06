/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:36:00 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 17:53:54 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default constructor
Fixed::Fixed(void) : _rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

// copy constructor receiving copy
Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

// copy constructor receiving int
Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	_rawBits = value << Fixed::_fractBits;
	return ;
}

// copy constructor receiving float
Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	_rawBits = (int)roundf(value * (1 << Fixed::_fractBits));
	return ;
}

// destructor
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const 
{
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
	return ;
}

// converts the fixed-point value to a floating-point value.
float	Fixed::toFloat( void ) const
{
	float	answer;

	answer = (float)_rawBits / (float)(1 << _fractBits);
	return (answer);
}

// converts the fixed-point value to an integer value
int	Fixed::toInt( void ) const
{
	int	answer;

	answer = _rawBits >> Fixed::_fractBits;
	return (answer);
}

const int Fixed::_fractBits = 8;
