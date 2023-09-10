/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:43:13 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 17:35:17 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& copy);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const& copy);

		void		guardGate();
		void		attack(const std::string& target);
};

std::ostream &operator<<(std::ostream &outputFile, ScavTrap const &r);

#endif