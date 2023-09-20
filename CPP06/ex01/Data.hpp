/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:18:11 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 18:42:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>

class	Data
{
	private:
		std::string	_name;
		int			_value;
	public:
		Data();
		Data( std::string name, int value );
		Data( Data const & copy );
		~Data();
		Data	&operator=( Data const & copy );

		std::string	getName( void ) const;
		int			getValue( void ) const;
};

std::ostream& operator<<(std::ostream& o, Data& data);

#endif