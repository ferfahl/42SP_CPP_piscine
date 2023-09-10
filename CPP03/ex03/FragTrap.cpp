/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:47:13 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 19:07:02 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void) : ClapTrap()
{
	this->setName("Echo");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Default constructor called, FragTrap Echo created" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);

	std::cout << "Name constructor called, FragTrap " << name << " created" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap()
{
	std::cout << "Copy constructor called for " << copy.getName() << " FragTrap" << std::endl;
	*this = copy;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default destructor called, FragTrap " << _name << " is gone." << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Copy assignment operator called for " << copy.getName() << " FragTrap" << std::endl;
	this->setName(copy.getName());
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if ((int)_energyPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is exausthed and can't enter high five mode!" << std::endl;
		return ;
	}
	if ((int)_hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is unable to enter high five mode for lack of life!" << std::endl;
		return ;
	}
	setEnergyPoints(_energyPoints - 1);
	//FragTrap <name> attacks <target>, causing <damage> points of damage!
	std::cout << "FragTrap " << _name << " gives everyone a high five!" << std::endl;
}
std::ostream &operator<<(std::ostream &outputFile, FragTrap const &r)
{
	outputFile	<< "\t FragTrap " << r.getName() << std::endl
				<< "Hit points: " << (int)r.getHitPoints() << std::endl
				<< "Energy points: " << (int)r.getEnergyPoints() << std::endl
				<< "Attack damage: " << (int)r.getAttackDamage() << std::endl;
	return (outputFile);
}
