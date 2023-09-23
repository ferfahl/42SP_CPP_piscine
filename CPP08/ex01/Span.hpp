/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:30:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 20:54:18 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <cstdlib>
# include <limits>

class Span
{
	private:
		unsigned int		_numberOfElements;
		std::multiset<int>	_set;
		void				_checkIsFull();
		void				_chechIsEnoughElements();
		Span();
	public:
		Span( unsigned int N );
		Span( Span const &instance );
		~Span();
		Span	&operator=( Span const &copy );

		void			addNumber( int number );
		void			addNumber( std::set<int>::iterator first, std::set<int>::iterator last );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	getTotal() const;

		class	IsFullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	noSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif