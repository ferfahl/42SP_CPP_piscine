/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:13:15 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 14:34:13 by feralves         ###   ########.fr       */
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
	MutantStack<int>	int_stack;
	MutantStack<int>	empty;

	if (int_stack.empty())
		std::cout << "empty stack" << std::endl;
	for (size_t i = 0; i < 5; ++i) {
		int rand_num = rand() % 10;
		int_stack.push(rand_num);
		std::cout << rand_num << " added to stack" << std::endl;
	}
	std::cout << "Stack size: " << int_stack.size() << std::endl;
	std::cout << "Top element: " << int_stack.top() << std::endl;
	int_stack.pop();
	std::cout << "Top element removed. New top: "
		<< int_stack.top() << std::endl;

	std::cout << "Iterator: " << std::endl;
	for (MutantStack<int>::iterator it = int_stack.begin();
			it != int_stack.end();
			++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Iterator: " << std::endl;
	for (MutantStack<int>::reverse_iterator it = int_stack.rbegin();
			it != int_stack.rend();
			++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	testVector()
{
	MutantStack< float, std::vector<float> >	mstack;
	if (mstack.empty())
		std::cout << "empty stack" << std::endl;
	mstack.push(5.5);
	mstack.push(13.7);
	std::cout << "pushed 5.5 and 13.7 to mutant stack" << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Top element: " << mstack.top() << std::endl;
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	mstack.push(3.1);
	mstack.push(5.2);
	mstack.push(737.3);
	mstack.push(0.4);
	std::cout << "pushed 3.1, 5.2, 737.3 and 0.4 to the stack" << std::endl;
	MutantStack< float, std::vector<float> >::iterator	it = mstack.begin();
	MutantStack< float, std::vector<float> >::iterator	ite = mstack.end();
	++it;
	--it;
	std::cout << "Stack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\nPoping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack:" << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\nReverse iterators" << std::endl;
	MutantStack<float, std::vector<float> >::reverse_iterator itCopyR = mstack.rbegin();
	MutantStack<float, std::vector<float> >::reverse_iterator iteCopyR = mstack.rend();
	std::cout << "Copyed stack reverse:" << std::endl;
	while (itCopyR != iteCopyR)
	{
		std::cout << *itCopyR << " ";
		++itCopyR;
	}
	std::cout << std::endl;
}

void	testList()
{
	MutantStack< std::string, std::list<std::string> >	string_stack;
	MutantStack< std::string, std::list<std::string> >	empty;

	if (string_stack.empty())
		std::cout << "empty stack" << std::endl;
	string_stack.push("hello");
	string_stack.push("big");
	string_stack.push("wide");
	string_stack.push("world");
	string_stack.push("baby!");
	std::cout << "Stack size: " << string_stack.size() << std::endl;
	std::cout << "Top element: " << string_stack.top() << std::endl;
	string_stack.pop();
	std::cout << "Top element removed. New top: "
		<< string_stack.top() << std::endl;

	std::cout << "Iterator: " << std::endl;
	for (MutantStack< std::string, std::list<std::string> >::iterator \
			it = string_stack.begin();
			it != string_stack.end();
			++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Iterator: " << std::endl;
	for (MutantStack< std::string, std::list<std::string> >::reverse_iterator \
			it = string_stack.rbegin();
			it != string_stack.rend();
			++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main()
{
	std::cout << "\n--------------- Main tests ---------------\n" << std::endl;
	testMain();
	std::cout << "\n-------------- Other tests ---------------" << std::endl;
	std::cout << "\n\tDeque type container" << std::endl;
	testDeque();
	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "\n\tVector type container" << std::endl;
	testVector();
	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "\n\tList type container" << std::endl;
	testList();
	return (0);
}