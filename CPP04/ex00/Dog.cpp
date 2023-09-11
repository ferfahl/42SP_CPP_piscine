/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:25:07 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 11:09:48 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Parameter Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog& copy)
{
	std::cout << "Copy Dog assignation called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
	return ;
}
