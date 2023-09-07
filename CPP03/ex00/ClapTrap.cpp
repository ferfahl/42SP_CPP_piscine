/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:36:16 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 22:12:39 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Droid"), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Default constructor called, Droid created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Name constructor called, " << name << " created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called, " << _name << " is gone." << std::endl;
	return ;
}

// = operator overload
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
void	ClapTrap::attack(const std::string& target)
{
	if ((int)_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is exausthed and can't attack "
				<< target << "!" << std::endl;
		return ;
	}
	if ((int)_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is deafeated!" << std::endl;
		return ;
	}
	setEnergyPoints(_energyPoints - 1);
	if ((int)_attackDamage <= 0)
	{
		std::cout << "ClapTrap " << _name << " attacks doesn't make a difference on "
				<< target << "!" << std::endl;
		return ;
	}
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount <= 0)
		return ;
	setHitPoints(_hitPoints - amount);
	//ClapTrap <name> was attacked, taking <damage> points of damage!
	std::cout << "ClapTrap " << _name << " was attacked, taking " << amount
			<< " points of damage! Now they have " << (int)_hitPoints << " of HP!" << std::endl;
}

// When ClapTrap repairs itself, it gets <amount> hit points back
void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount <= 0)
		return ;
	if ((int)_energyPoints <= 0 || (int)_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is exausthed and can't heal themselves!"
				<< std::endl;
		return ;
	}
	else
	{
		setEnergyPoints(_energyPoints - 1);
		setHitPoints(_hitPoints + amount);
		//ClapTrap <name> healed themselves, restoring <amount> of HP! Their total is: <HP>
		std::cout << "ClapTrap " << _name << " healed themselves, restoring "
				<< amount << " of HP! Now their total is: " << (int)_hitPoints << "!" << std::endl;
	}
}


std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &r)
{
	outputFile	<< "\t" << r.getName() << std::endl
				<< "Hit points: " << (int)r.getHitPoints() << std::endl
				<< "Energy points: " << (int)r.getEnergyPoints() << std::endl
				<< "Attack damage: " << (int)r.getAttackDamage() << std::endl;
	return (outputFile);
}
