/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:26 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 17:02:31 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARConvertion_HPP
# define SCALARConvertion_HPP

# include <exception>
# include <string>
# include <iostream>
# include <sstream>
# include <limits>
# include <cmath>
# include <iomanip>

# define QUOTE '\''

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
		static void			_validateInt( const double d );
		static void			_validateFloat( const double d );
		//convert str
		static std::string	_convertFloatPseudo( std::string str );
		static std::string	_convertDoublePseudo( std::string str );
		static void			_convertChar( const std::string &str );
		static void			_convertInt( const std::string &str );
		static void			_convertFloat( const std::string &str );
		static void			_convertDouble( const std::string &str );
		//print functs
		static void			_printPseudo( std::string str );
		static void			_printConversions( std::string c, int i, float f, double d, int precision );
		static void			_printConversions( std::string c, std::string i, float f, double d, int precision );
	public:
		ScalarConvertion();
		ScalarConvertion( ScalarConvertion const & src );
		~ScalarConvertion();
		ScalarConvertion		&operator=( ScalarConvertion const & rhs );
		static void	convert( std::string arg);
		class	NotValidType : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class	IntOverflow : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		static void _validateFloat(void);
		class	FloatOverflow : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif