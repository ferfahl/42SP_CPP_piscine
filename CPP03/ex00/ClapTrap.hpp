/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:36:37 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 22:02:56 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap {
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();
		ClapTrap		&operator=(ClapTrap const& clapTrap);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		unsigned int	getEnergyPoints(void) const;
		void			setEnergyPoints(unsigned int amount);
		unsigned int	getAttackDamage(void) const;
		void			setAttackDamage(unsigned int amount);
		unsigned int	getHitPoints(void) const;
		void			setHitPoints(unsigned int amount);
		std::string		getName(void) const;
		void			setName(std::string name);
};

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &r);

#endif