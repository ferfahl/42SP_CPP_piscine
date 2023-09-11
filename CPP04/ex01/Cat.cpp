/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:35 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 22:34:41 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
	_catBrain = new Brain();
	for (int i = 0; i < 100; i++)
		_catBrain->setIdea(i, _catBrain->getIdea(i, "cat"));
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Parameter Cat constructor called" << std::endl;
	_catBrain = new Brain();
	for (int i = 0; i < 100; i++)
		_catBrain->setIdea(i, _catBrain->getIdea(i, "cat"));
	return ;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
	// this->_catBrain = new Brain();
	return ;
}

Cat::~Cat()
{
	delete _catBrain;
	std::cout << "Destructor for Cat called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat& copy)
{
	std::cout << "Copy Cat assignation called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy.getType();
		*(this->_catBrain) = *(copy.getBrain());
	}
	return (*this);
}

Brain*	Cat::getBrain(void) const
{
	return (_catBrain);
}

std::string	Cat::getIdea(int index) const
{
	return (_catBrain->getIdea(index));
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
	return ;
}
