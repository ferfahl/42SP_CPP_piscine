/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:35 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 11:10:00 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "Parameter WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "Copy WrongCat assignation called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Squeek" << std::endl;
	return ;
}
