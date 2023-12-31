/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:31:21 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 18:34:04 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	std::cout << "Initializing messages:" << std::endl;
	ClapTrap robot1;
	ClapTrap robot2("C3PO");
	ScavTrap robot3;
	ScavTrap robot4("Wall-E");
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Fights:" << std::endl;
	robot3.attack(robot2.getName());
	robot2.takeDamage(robot3.getAttackDamage());
	robot1.setAttackDamage(30);
	robot1.attack(robot4.getName());
	robot4.takeDamage(robot1.getAttackDamage());
	std::cout << std::endl << robot1 << robot2 << robot3 << robot4 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Healing:" << std::endl;
	robot4.beRepaired(5);
	std::cout << std::endl << robot1 << robot2 << robot3 << robot4 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Special function:" << std::endl;
	robot3.guardGate();
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Destruction messages:" << std::endl;
	return (0);
}
