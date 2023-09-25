/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:18:34 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 13:33:32 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <stack> //chosen container

class RPN
{
	private:
		std::stack<int>	_stack; //chosen container
		bool			_divByZero;
	public:
		RPN();
		RPN( RPN const & copy );
		~RPN();
		RPN &		operator=( RPN const & copy );

		bool		addTokenToStack( std::string strToken );
		void 		endResultOfExpression( int quantityOfOperators, int  quantityOfNumbers );
		bool		isOperator( const std::string& str );
		float		operation( float a, float b, char mathOperator );
		int			mathematicalOperationInvertedPolish( std::string input );
		int 		executeMathOperation( char mathOperator );
		int			invertedPolish( char **input );
		class		ImpossibleOperation : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif