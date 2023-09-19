/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:26 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 23:57:04 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTION_HPP
# define SCALARCONVERTION_HPP

# include <exception>
# include <string>

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
		ScalarConvertion();
		ScalarConvertion( ScalarConvertion const & src );
		~ScalarConvertion();
		ScalarConvertion		&operator=( ScalarConvertion const & rhs );

		// static void	_convertChar( const std::string &str );
		// static void	_convertInt( const std::string  &str );
		// static void	_convertFloat( const std::string&str );
		// static void	_convertDouble( const std::string&str );
		// static void	_printPseudo( const std::string&str );
		static bool	_isCharValid( std::string str );
		static bool	_isDoubleValid( std::string str );
		static bool	_isFloatValid( std::string str );
		static bool	_isNumericValid( std::string str );
		static bool	_isPseudoLiteral( std::string str );
	public:
		void	convert( std::string arg);
		class	NotValidType : public std::exception
		{
			virtual const char* what(void) const throw();
		};
}

#endif