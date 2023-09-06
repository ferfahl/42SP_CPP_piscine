/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:35:54 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 16:00:32 by feralves         ###   ########.fr       */
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
		Fixed	&operator=( Fixed const &fixed );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif