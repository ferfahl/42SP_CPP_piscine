/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:26 by feralves          #+#    #+#             */
/*   Updated: 2023/09/19 17:48:47 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARConvertion_HPP
# define SCALARConvertion_HPP

# include <exception>
# include <string>
# include <iostream>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_LITERAL
};

class	ScalarConvertion
{
	private:
		//validate str
		static int			_getInputType( std::string value );
		static bool			_isCharValid( std::string str );
		static bool			_isDoubleValid( std::string str );
		static bool			_isFloatValid( std::string str );
		static bool			_isIntValid( std::string str );
		static bool			_isPseudoLiteral( std::string str );
		//convert str
		static std::string	_convertFloatPseudo( std::string str );
		static std::string	_convertDoublePseudo( std::string str );
		//print functs
		static void			_printPseudo( std::string str );
		static void			_printChar( const std::string &str );
		static void			_printInt( const std::string &str );
		static void			_printFloat( const std::string &str );
		static void			_printDouble( const std::string &str );
	public:
		ScalarConvertion();
		ScalarConvertion( ScalarConvertion const & src );
		~ScalarConvertion();
		ScalarConvertion		&operator=( ScalarConvertion const & rhs );
		static void	convert( std::string arg);
		class	NotValidType : public std::exception
		{
			virtual const char* what(void) const throw();
		};
};

#endif