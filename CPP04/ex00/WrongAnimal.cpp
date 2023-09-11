/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 21:08:42 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Seal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Parameter WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "Copy WrongAnimal assignation called" << std::endl;
	*this = copy;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Ow ow ow ow" << std::endl;
	return ;
}
