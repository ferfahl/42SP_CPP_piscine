/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:42:37 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 15:37:17 by feralves         ###   ########.fr       */
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
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed	&operator=( Fixed const &fixed );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif