/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:20:39 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 15:48:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	isValid = FALSE;
}

Contact::~Contact(void){
	
}

std::string	Contact::getFirstName(void)
{
	return firstName;
}

void	Contact::keepFirstName(std::string str)
{
	firstName = str;
}

std::string	Contact::getLastName(void)
{
	return lastName;
}

void	Contact::keepLastName(std::string str)
{
	lastName = str;
}

std::string	Contact::getNickname(void)
{
	return nickname;
}

void	Contact::keepNickname(std::string str)
{
	nickname = str;
}

std::string	Contact::getSecret(void)
{
	return darkestSecret;
}

void	Contact::keepSecret(std::string str)
{
	darkestSecret = str;
}

std::string	Contact::getPhone(void)
{
	return phoneNumber;
}

int	Contact::keepPhone(std::string number)
{
	for (size_t i = 0; i < number.size(); i++) {
		if (!isdigit(number[i]))
		{
			std::cout << "Invalid phone number. Should be numbers" << std::endl;
			return (FALSE);
		}
	}
	phoneNumber = number;
	return (TRUE);
}