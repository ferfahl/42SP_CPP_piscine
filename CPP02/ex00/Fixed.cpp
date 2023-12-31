/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:42:24 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 15:38:12 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default constructor
Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// copy constructor
Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

// destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// = operator overload
Fixed &Fixed::operator=( Fixed const &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
	return ;
}

const int Fixed::_fractBits = 8;
