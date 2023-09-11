/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:35 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 21:02:47 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Parameter Cat constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat& copy)
{
	std::cout << "Copy Cat assignation called" << std::endl;
	*this = copy;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
	return ;
}
