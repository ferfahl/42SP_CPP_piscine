/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:20:39 by feralves          #+#    #+#             */
/*   Updated: 2023/08/25 20:46:06 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	this->isValid = FALSE;
}

Contact::~Contact(void){
	
}

std::string	Contact::getFirstName(void)
{
	return this->firstName;
}

void	Contact::keepFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string	Contact::getLastName(void)
{
	return this->lastName;
}

void	Contact::keepLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string	Contact::getNickname(void)
{
	return this->nickname;
}

void	Contact::keepNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getSecret(void)
{
	return this->darkestSecret;
}

void	Contact::keepSecret(std::string secret)
{
	this->darkestSecret = secret;
}

std::string	Contact::getPhone(void)
{
	return this->phoneNumber;
}

void	Contact::keepPhone(std::string number)
{
	this->phoneNumber = number;
}