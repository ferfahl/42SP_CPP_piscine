/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:19:27 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 15:57:53 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printNewPhone(void)
{
	std::cout << "Hello to your new phonebook" << std::endl
		<< "Valid commands: ADD, SEARCH or EXIT" << std::endl;
}

void	errorMessage(std::string str)
{
	std::cout << CLEAN_WINDOW
		<< "Wrong input: '" << str << "'" << std::endl
		<< "You can use the commands:" << std::endl
		<< " - ADD (to add a new contact to the phonebook)" << std::endl
		<< " - SEARCH (to show the phonebook and more infos on the contact)" << std::endl
		<< " - EXIT (this command will empty the phonebook)" << std::endl;
}

void	byeMessage(void)
{
	std::cout << "Goodbye." << std::endl;
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	str;

	std::cout << CLEAN_WINDOW;
	printNewPhone();
	while (1)
	{
		std::cout << "Select a command:" << std::endl;
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