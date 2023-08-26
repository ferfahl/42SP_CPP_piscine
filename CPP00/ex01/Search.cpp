/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:28:48 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 17:34:08 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printContents(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0,9) + '.';
	else
		std::cout << std::setw(10) << str;
}

int	PhoneBook::getNbrContact(void)
{
	int	i;

	i = 0;
	while (contacts[i].isValid)
		i++;
	if (i < NBR_CONTACTS)
		return (i);
	else
		return (NBR_CONTACTS);
}

void	printContact(Contact contact)
{
	std::cout << "First Name: " << contact.getFirstName() << std::endl
			<< "Last Name: " << contact.getLastName() << std::endl
			<< "Nickname: " << contact.getNickname() << std::endl
			<< "Phone Number: " << contact.getPhone() << std::endl
			<< "Darkest Secret: " << contact.getSecret() << std::endl;
}

void	PhoneBook::showPhoneBook(void)
{
	int	i;
	std::string line;

	i = 0;
	std::cout << CLEAN_WINDOW
			<< std::setw(25) << "PhoneBook" << std::endl
			<< "----------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	if (nbrContacts == -1)
	{
		std::cout << std::endl << std::setw(35) << "No contact info to display" << std::endl
		<< "----------------------------------------------" << std::endl;
		return ;
	}
	while (i < getNbrContact())
	{
		std::cout << std::setw(10) << contacts[i].contactValue << "|";
		printContents(contacts[i].getFirstName());
		std::cout << "|";
		printContents(contacts[i].getLastName());
		std::cout << "|";
		printContents(contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "----------------------------------------------" << std::endl;
	i = -1;
	while (i < 0)
	{
		std::cout << "Choose a contact index:" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
			return ;
		for (size_t j = 0; j < line.size(); j++)
		{
			if (j != 0)
				break ;
			if (!std::isdigit(line[j]))
				std::cout << "Invalid index" << std::endl;
			else
			{
				i = std::atoi(line.c_str());
				i--;
				if (i < 0 || i >= getNbrContact())
				{
					std::cout << "Invalid index" << std::endl;
					i = -1;
				}
			}
		}
	}
	std::cout << "----------------------------------------------" << std::endl;
	printContact(contacts[i]);
	std::cout << "----------------------------------------------" << std::endl;
}