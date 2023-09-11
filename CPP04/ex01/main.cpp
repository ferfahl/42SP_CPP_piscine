/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:47:33 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 23:02:15 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
	std::cout << "----------------Main from pdf:----------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; //should not create a leak
	delete i;

	std::cout << std::endl << "----------------- More tests:-----------------" << std::endl;
	std::cout << "============== Array of animals ==============" << std::endl;

	int n = 10;
	int m = n / 2;
	Animal* animals[n];

	for (int i = 0; i < m; i++)
		animals[i] = new Dog();
	for (int i = m; i < n; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "============== Checking animals ==============" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	std::cout << std::endl << "============== Deleting animals ==============" << std::endl;
	for (int i = 0; i < n; i++)
		delete animals[i];

	std::cout << std::endl << "================ Cats phrases ================" << std::endl;
	Cat* cat = new Cat;
	Cat* cat2(cat);
	Cat cat3;
	cat3 = *cat2;
	std::cout << cat->getType() << " is thinking: " << cat->getIdea(42) << std::endl;
	std::cout << cat2->getType() << " is thinking: " << cat2->getIdea(7) << std::endl;
	std::cout << cat3.getType() << " is thinking: " << cat3.getIdea(13) << std::endl;
	std::cout << std::endl;
	delete cat;
	std::cout << std::endl << "================ Dogs phrases ================" << std::endl;
	Dog *dog = new Dog;
	Dog dog2;
	dog2 = *dog;
	std::cout << dog->getType() << " is thinking: " << dog->getIdea(42) << std::endl;
	std::cout << dog2.getType() << " is thinking: " << dog2.getIdea(13) << std::endl;

	delete dog;
	std::cout << std::endl << "----------------- Default destructors:-----------------" << std::endl;
	return 0;
}