/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 23:12:57 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Parameter Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = copy;
	return ;
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal& copy)
{
	std::cout << "Copy Animal assignation called" << std::endl;
	*this = copy;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

