/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:01:48 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 19:13:59 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	this->_name = "k9";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = "k9_clap_name";
	std::cout << "Default constructor called, DiamondTrap k9 created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "Name constructor called, DiamondTrap " << name << " created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "Copy constructor called for " << copy.getName() << " DiamondTrap" << std::endl;
	*this = copy;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default destructor called, DiamondTrap " << _name << " is gone." << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "Copy assignment operator called for " << copy.getName() << " DiamondTrap" << std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return (*this);
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
  std::cout << "DiamondTrap " << _name << " says: \"My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << "\"." << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (_name);
}

std::ostream &operator<<(std::ostream &outputFile, DiamondTrap const &r)
{
	outputFile	<< "\t DiamondTrap " << r.getName() << std::endl
				<< "Hit points: " << (int)r.getHitPoints() << std::endl
				<< "Energy points: " << (int)r.getEnergyPoints() << std::endl
				<< "Attack damage: " << (int)r.getAttackDamage() << std::endl;
	return (outputFile);
}
