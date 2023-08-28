/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:01:59 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 17:05:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	string2 = &string;
	std::string&	string3 = string;

	std::cout << std::endl;
	std::cout << "The memory address of the string (original) is: " << &string << std::endl;
	std::cout << "The memory address held by string2 (pointer) is: " << string2 << std::endl;
	std::cout << "The memory address held by string3 (reference) is: " << &string3 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "The value of the string variable is: " << string << std::endl;
	std::cout << "The value pointed to by string2 is: " << *string2 << std::endl;
	std::cout << "The value pointed to by string3 is: " << string3 << std::endl;
	std::cout << std::endl;
	return (0);
}