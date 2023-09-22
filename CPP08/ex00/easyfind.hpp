/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:43:39 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 19:59:37 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>

template	<typename T>
typename T::iterator	easyFind( T& elements, int value )
{
	typename T::iterator	list = find(elements.begin(), elements.end(), value);

	if (list == elements.end())
		throw  std::out_of_range("Value not found");
	return (list);
}

#endif