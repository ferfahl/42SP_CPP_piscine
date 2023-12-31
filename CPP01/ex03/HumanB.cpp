/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:59:40 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 19:27:23 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack()
{
	if (_weaponB)
		std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
	else
		std::cout << _name << " attacks with their hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weaponB = &weapon;
}