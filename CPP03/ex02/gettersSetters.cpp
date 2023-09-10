/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gettersSetters.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:00:53 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 22:02:51 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	_hitPoints = amount;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energyPoints = amount;
}
