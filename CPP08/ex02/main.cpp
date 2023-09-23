/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:13:15 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 22:45:26 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	testMain()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void	testDeque()
{
	//
}

void	testVector()
{
	//
}

void	testList()
{
	//
}

int main()
{
	std::cout << "\n--------------- Main tests ---------------\n" << std::endl;
	testMain();
	std::cout << "\n-------------- Other tests ---------------" << std::endl;
	std::cout << "\nDeque type container" << std::endl;
	testDeque();
	std::cout << "\nVector type container" << std::endl;
	testVector();
	std::cout << "\nList type container" << std::endl;
	testList();
	return (0);
}