/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:44:31 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 15:59:22 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string>

template <typename T>
class Array{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array( unsigned int n );
		Array( Array const &src );
		~Array();
		Array	&operator=( Array const &src );
		T		&operator[]( int i );

		size_t	size() const;
		class OutOfLimitsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

template< typename T >
std::ostream& operator<<(std::ostream& output, Array<T> & array);

#include "Array.tpp"

#endif