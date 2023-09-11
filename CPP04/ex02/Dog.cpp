/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:25:07 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 22:56:38 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
	_dogBrain = new Brain();
	for (int i = 0; i < 100; i++)
		_dogBrain->setIdea(i, _dogBrain->getIdea(i, "dog"));
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Parameter Dog constructor called" << std::endl;
	_dogBrain = new Brain();
	for (int i = 0; i < 100; i++)
		_dogBrain->setIdea(i, _dogBrain->getIdea(i, "dog"));
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
	delete _dogBrain;
	std::cout << "Destructor for Dog called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog& copy)
{
	std::cout << "Copy Dog assignation called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy.getType();
		*(this->_dogBrain) = *(copy.getBrain());
	}
	return (*this);
}

Brain*	Dog::getBrain(void) const
{
	return (_dogBrain);
}

std::string	Dog::getIdea(int index) const
{
	return (_dogBrain->getIdea(index));
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
	return ;
}
