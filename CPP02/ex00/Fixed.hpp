/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:42:37 by feralves          #+#    #+#             */
/*   Updated: 2023/09/01 17:17:39 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	int					_rawBits;
	static const int	_fractBits;
	public:
		Fixed();
		Fixed(const Fixed& copy); //copy constructor
		~Fixed();
		Fixed	&operator=( Fixed const &fixed ); // = operator overload
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif