/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:01:04 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 17:41:05 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->setName("Bastion");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Default constructor called, ScavTrap " << getName() << " created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);

	std::cout << "Name constructor called, ScavTrap " << name << " created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap()
{
	std::cout << "Copy constructor called for " << copy.getName() << " ScavTrap" << std::endl;
	*this = copy;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default destructor called, ScavTrap " << getName() << " is gone." << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Copy assignment operator called for " << copy.getName() << " ScavTrap" << std::endl;
	this->setName(copy.getName());
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if ((int)_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is exausthed and can't attack "
				<< target << "!" << std::endl;
		return ;
	}
	if ((int)_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is deafeated!" << std::endl;
		return ;
	}
	setEnergyPoints(_energyPoints - 1);
	if ((int)_attackDamage <= 0)
	{
		std::cout << "ScavTrap " << _name << " attacks doesn't make a difference on "
				<< target << "!" << std::endl;
		return ;
	}
	//ScavTrap <name> attacks <target>, causing <damage> points of damage!
	std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
if ((int)_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << getName() << " is exausthed and can't enter gate keeper mode!" << std::endl;
		return ;
	}
	if ((int)_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << getName() << " is unable to enter gate keeper mode for lack of life!" << std::endl;
		return ;
	}
	setEnergyPoints(_energyPoints - 1);
	//ScavTrap <name> attacks <target>, causing <damage> points of damage!
	std::cout << "ScavTrap " << getName() << " enters gate keeper mode!" << std::endl;
}
std::ostream &operator<<(std::ostream &outputFile, ScavTrap const &r)
{
	outputFile	<< "\t" << r.getName() << std::endl
				<< "Hit points: " << (int)r.getHitPoints() << std::endl
				<< "Energy points: " << (int)r.getEnergyPoints() << std::endl
				<< "Attack damage: " << (int)r.getAttackDamage() << std::endl;
	return (outputFile);
}
