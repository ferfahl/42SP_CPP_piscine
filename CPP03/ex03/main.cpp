/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:31:21 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 19:09:24 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	std::cout << "Initializing messages:" << std::endl;
	DiamondTrap	robot1;
	DiamondTrap	robot2("Wall-E");
	DiamondTrap	robot3(robot2);
	std::cout << std::endl << robot1 << robot2 << robot3 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Fights:" << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(robot1.getAttackDamage());
	std::cout << std::endl << robot1 << robot2 << robot3 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Healing:" << std::endl;
	robot2.beRepaired(50);
	std::cout << std::endl << robot1 << robot2 << robot3 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Special function:" << std::endl;
	robot1.highFivesGuys();
	robot1.whoAmI();
	robot2.highFivesGuys();
	robot2.whoAmI();
	robot3.whoAmI();
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Destruction messages:" << std::endl;
	return (0);
}
