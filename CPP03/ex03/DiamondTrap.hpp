/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:02:13 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 19:06:09 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	std::string	_name;

	public:
		DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const& copy);
		~DiamondTrap();
		DiamondTrap	&operator=(DiamondTrap const& copy);

		void		whoAmI();
		void		attack(const std::string& target);
		std::string	getName() const;
};

std::ostream &operator<<(std::ostream &outputFile, DiamondTrap const &r);

#endif