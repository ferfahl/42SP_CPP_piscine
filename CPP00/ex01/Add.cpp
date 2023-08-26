/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:47:17 by feralves          #+#    #+#             */
/*   Updated: 2023/08/25 20:54:04 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	getPos(int nbr)
{
	int	i;

	i = nbr;
	if (i < 8)
		i++;
	else
		i = 0;
	return (i);
}

void	PhoneBook::addNewContact(void)
{
	std::string	info;
	int			nbr;

	nbr = getPos(this->nbrContacts);
	std::cout << "Input contact data:" << std::endl;
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
	this->contacts[nbr].keepPhone(info);
	std::cout << "Deepest Secret:" << std::endl;
	std::getline(std::cin, info);
	this->contacts[nbr].keepSecret(info);
	this->contacts[nbr].isValid = TRUE;
	this->nbrContacts = nbr;
}