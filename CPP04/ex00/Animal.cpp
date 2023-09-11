/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 11:09:00 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Fox")
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
	*this = copy;
	std::cout << "Copy Animal constructor called" << std::endl;
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
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Ring-ding-ding-ding-dingeringeding!" << std::endl;
	return ;
}
