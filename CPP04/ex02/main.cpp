/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:06:25 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 23:15:06 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
	/* The first line doesn't work! because the following virtual functions are 
	pure within ‘Animal’: virtual void Animal::makeSound() const; in class Animal */
	// Animal test;
	Cat cat;
	Dog dog;

	std::cout << "Cat sound: ";
	cat.makeSound();
	std::cout << "Dog sound: ";
	dog.makeSound();

	std::cout << cat.getType() << " is thinking: " << cat.getIdea(42) << std::endl;
	std::cout << dog.getType() << " is thinking: " << dog.getIdea(42) << std::endl;

	std::cout << std::endl << "----------------- Default destructors:-----------------" << std::endl;
	return 0;
}
