/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:35:54 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 17:25:22 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	int					_rawBits;
	static const int	_fractBits;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed	&operator=( Fixed const &fixed );
		
		bool	operator>( Fixed const &other );
		bool	operator>=( Fixed const &other );
		bool	operator<( Fixed const &other );
		bool	operator<=( Fixed const &other );
		bool	operator==( Fixed const &other );
		bool	operator!=( Fixed const &other );

		Fixed	operator+( Fixed const &other );
		Fixed	operator-( Fixed const &other );
		Fixed	operator*( Fixed const &other );
		Fixed	operator/( Fixed const &other );

		Fixed	&operator++( void ); // Prefix increment operator
		Fixed	operator++( int ); // Postfix increment operator
		Fixed	&operator--( void ); // Prefix decrement operator
		Fixed	operator--( int ); // Postfix decrement operator
		
		static Fixed const	&min( Fixed &a, Fixed &b );
		static Fixed const	&min( Fixed const &a, Fixed const &b );
		static Fixed const	&max( Fixed &a, Fixed &b );
		static Fixed const	&max( Fixed const &a, Fixed const &b );
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif