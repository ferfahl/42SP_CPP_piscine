/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:02:24 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 19:20:03 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	Weapon::getType()
{
	return (type);
}