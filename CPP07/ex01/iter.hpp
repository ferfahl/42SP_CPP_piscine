/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:33:32 by feralves          #+#    #+#             */
/*   Updated: 2024/02/25 18:47:18 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template	<typename T>
void	iter( T* array, size_t len, void (*fptr)(T& elem) )
{
	if (!array || len <= 0)
		return ;
	for (size_t i = 0; i < len; i++)
		fptr(array[i]);
}

template	<typename T>
void	iter( T* array, size_t len, void (*fptr)(const T& elem) )
{
	if (!array || len <= 0)
		return ;
	for (size_t i = 0; i < len; i++)
		fptr(array[i]);
}

template	<typename T>
void	printing( T& elem )
{
	std::cout << elem << std::endl;
}

template <typename T>
void	plusTen(T& elem)
{
	elem += 10;
}

#endif