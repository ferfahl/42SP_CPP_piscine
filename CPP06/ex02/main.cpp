/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:49:56 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 19:22:57 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <unistd.h>

//These four classes don’t have to be designed in the Orthodox Canonical Form.

Base*	generate(void)
{
	std::cout << "-------- Generating a random Base --------" << std::endl;
	int random_number;

	std::srand((unsigned int)time(NULL));
	random_number = rand() % 100;
	if (random_number < 33)
		return (new A);
	else if (random_number < 66)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	std::cout << "------ Identifying Base by pointer -------" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "The class indentified by pointer is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The class indentified by pointer is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The class indentified by pointer is C" << std::endl;
	else
		std::cout << "This class is not valid" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "----- Identifying Base by reference ------" << std::endl;
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout <<  "The class indentified by reference is A" << std::endl;
		std::cout << "---------- Destructor for class ----------" << std::endl;
		return ;
	}
	catch(...) {}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout <<  "The class indentified by reference is B" << std::endl;
		std::cout << "---------- Destructor for class ----------" << std::endl;
		return ;
	}
	catch(...) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout <<  "The class indentified by reference is C" << std::endl;
		std::cout << "---------- Destructor for class ----------" << std::endl;
		return ;
	}	
	catch (...) 
	{
		std::cout << "This class is not valid\n";
	}
}

int	main()
{
	Base *ptr;

	for (int i = 0; i < 10; i++) {
		std::cout << "\n------------ Test number " << i << " ---------------" << std::endl;
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		std::cout << "--- Destructor for Base & random class ---" << std::endl;
		delete ptr;
		std::cout << std::endl;
		sleep(1);
	}
	std::cout << "\n-------------- Invalid test --------------" << std::endl;
	Base newBase;
	identify(&newBase);
	identify(newBase);
}