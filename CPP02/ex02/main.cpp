/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:46:54 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 20:30:29 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "pdf main:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "Comparison operators - diff values" << std::endl;
	std::cout << "a = " << a << " and b = " << b << std::endl;
	std::cout << "a < b: " << (a < b ? "true" : "false") << std::endl;
	std::cout << "a > b: " << (a > b ? "true" : "false") << std::endl;
	std::cout << "a <= b: " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "a >= b: " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "a == b: " << (a == b ? "true" : "false") << std::endl;
	std::cout << "a != b: " << (a != b ? "true" : "false") << std::endl << std::endl;
	Fixed const c(a);
	std::cout << "Comparison operators - same value" << std::endl;
	std::cout << "a = " << a << " and c = " << c << std::endl;
	std::cout << "a < c: " << (a < c ? "true" : "false") << std::endl;
	std::cout << "a > c: " << (a > c ? "true" : "false") << std::endl;
	std::cout << "a <= c: " << (a <= c ? "true" : "false") << std::endl;
	std::cout << "a >= c: " << (a >= c ? "true" : "false") << std::endl;
	std::cout << "a == c: " << (a == c ? "true" : "false") << std::endl;
	std::cout << "a != c: " << (a != c ? "true" : "false") << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "Arithmetic operators" << std::endl;
	a = Fixed(1.5f);
	Fixed const d(0.5f);
	std::cout << "a = " << a << " and d = " << d << std::endl;
	std::cout << "a + d = " << a + d << std::endl;
	std::cout << "a - d = " << a - d << std::endl;
	std::cout << "a / d = " << a / d << std::endl;
	Fixed e = Fixed(0);
	std::cout << "a = " << a << " and e = " << 0 << std::endl;
	std::cout << "a * e = " << a * e << std::endl;
	std::cout << "a / e = " << a / e << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	return (0);
}