/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:22 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 16:26:55 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors / Destructors / Overload operator = -> Canonical form */

PmergeMe::PmergeMe( void )
{ }

PmergeMe::PmergeMe( PmergeMe const &copy )
{
	*this = copy;
	return ;
}

PmergeMe::~PmergeMe( void )
{ }

PmergeMe &PmergeMe::operator=( PmergeMe const &copy )
{
	(void)copy;
	return (*this);
}

/* Methods */

// void	PmergeMe::run( char **input )
// {
	
// }
