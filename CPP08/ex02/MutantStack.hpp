/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:15:23 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 23:07:39 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>
# include <iterator>
# include <iostream>
#include <list>
#include <algorithm>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack()
		{};
		MutantStack( MutantStack const *copy ) : std::stack<T, Container>(copy)
		{}
		~MutantStack()
		{};
		MutantStack			&operator=( MutantStack const &copy )
		{
			std::stack<T, Container>::operator=(copy);
			return *this;
		}

		typedef typename	Container::iterator iterator;
		typedef typename	Container::reverse_iterator reverse_iterator;
		iterator			begin()
		{return this->c.begin();}
		iterator			end()
		{return this->c.end();}
		reverse_iterator	rbegin()
		{return this->c.rbegin();}
		reverse_iterator	rend()
		{return this->c.rend();}
};

#endif