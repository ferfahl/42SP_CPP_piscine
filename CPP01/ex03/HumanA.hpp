/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:59:37 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 19:13:34 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	std::string	name;
	Weapon		&weaponA;
	public:
		HumanA(std::string name, Weapon &weaponA);
		~HumanA();
		void	attack();
};

#endif