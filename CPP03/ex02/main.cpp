/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:31:21 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 18:35:17 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	std::cout << "Initializing messages:" << std::endl;
	ClapTrap robot1("Wall-E");
	ScavTrap robot2;
	FragTrap robot3;
	FragTrap robot4("Eve");
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Fights:" << std::endl;
	robot3.attack(robot4.getName());
	robot4.takeDamage(robot3.getAttackDamage());
	robot1.setAttackDamage(10);
	robot1.attack(robot2.getName());
	robot2.takeDamage(robot1.getAttackDamage());
	std::cout << std::endl << robot1 << robot2 << robot3 << robot4 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Healing:" << std::endl;
	robot4.beRepaired(50);
	std::cout << std::endl << robot1 << robot2 << robot3 << robot4 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Special function:" << std::endl;
	robot2.guardGate();
	robot3.highFivesGuys();
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Destruction messages:" << std::endl;
	return (0);
}
