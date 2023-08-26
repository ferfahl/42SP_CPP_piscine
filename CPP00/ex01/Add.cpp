/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:47:17 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 15:10:16 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	getPos(int nbr)
{
	int	i;

	i = nbr;
	if (i < 3 - 1)
		i++;
	else
		i = 0;
	return (i);
}

void	PhoneBook::addNewContact(void)
{
	std::string	info;
	int			nbr;

	std::cout << CLEAN_WINDOW;
	nbr = getPos(this->nbrContacts);
	std::cout << "\t\tInput contact data" << std::endl
		<< "______________________________________________" << std::endl;
	std::cout << "First name:" << std::endl;
	std::getline(std::cin, info);
	this->contacts[nbr].keepFirstName(info);
	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, info);
	this->contacts[nbr].keepLastName(info);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, info);
	this->contacts[nbr].keepNickname(info);
	std::cout << "Phone Number:" << std::endl;
	std::getline(std::cin, info);
	while (this->contacts[nbr].keepPhone(info) == FALSE)
	{
		std::cout << "Phone Number:" << std::endl;
		std::getline(std::cin, info);
	}
	std::cout << "Deepest Secret:" << std::endl;
	std::getline(std::cin, info);
	this->contacts[nbr].keepSecret(info);
	this->contacts[nbr].isValid = TRUE;
	this->contacts[nbr].contactValue = nbr + 1;
	this->nbrContacts = nbr;
}