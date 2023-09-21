/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:28:31 by feralves          #+#    #+#             */
/*   Updated: 2023/09/21 10:53:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template	<typename T>
void	swap( T& a, T& b )
{
	T	t;
	
	t = a;
	a = b;
	b = t;
}

template	<typename T>
T	&min( T& a, T& b )
{
	return (a < b ? a : b);
}

template	<typename T>
T	&max( T& a, T& b )
{
	return (a > b ? a : b);
}

#endif