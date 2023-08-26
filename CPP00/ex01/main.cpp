/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:19:27 by feralves          #+#    #+#             */
/*   Updated: 2023/08/25 20:44:59 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printNewPhone(void)
{
	std::cout << "New phonebook, no contacts to show" << std::endl;
}

void	errorMessage(std::string str)
{
	std::cout << "Wrong input: " << str << std::endl;
	std::cout << "You can use: ADD, SEARCH or EXIT" << std::endl;
}

void	byeMessage(void)
{
	std::cout << "Goodbye." << std::endl;
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	str;

	printNewPhone();
	while (1)
	{
		std::getline(std::cin, str);
		if (str.compare("EXIT") == 0)
			break ;
		else if (str.compare("ADD") == 0)
			phoneBook.addNewContact();
		else if (str.compare("SEARCH") == 0)
			phoneBook.showPhoneBook();
		else
			errorMessage(str);
	}
	byeMessage();
	return (0);
}