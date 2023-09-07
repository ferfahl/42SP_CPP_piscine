/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:31:21 by feralves          #+#    #+#             */
/*   Updated: 2023/09/06 22:15:58 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	std::cout << "Initializing messages:" << std::endl;
	ClapTrap robot1;
	ClapTrap robot2("C3PO");
	ClapTrap robot("R2D2");
	ClapTrap robotCopy = robot;
	ClapTrap robotCopy2(robot);
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Fights:" << std::endl;
	robot1.attack(robot.getName());
	robot.takeDamage(robot1.getAttackDamage());
	robot1.setAttackDamage(2);
	robot1.attack(robot.getName());
	robot.takeDamage(robot1.getAttackDamage());
	std::cout << std::endl << robot << robot1 << std::endl;
	robot2.setAttackDamage(5);	
	robot2.attack(robotCopy.getName());
	robotCopy.takeDamage(robot2.getAttackDamage());
	std::cout << std::endl << robotCopy << robot2 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Healing:" << std::endl;
	robot.beRepaired(5);
	robotCopy.setName("BB8");
	robotCopy.beRepaired(10);
	std::cout << std::endl << robot << robotCopy << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Negative values: (no input expected)" << std::endl;
	robotCopy.beRepaired(-10);
	robotCopy.takeDamage(-20);
	std::cout << std::endl << robot << robotCopy << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "With no energy available:" << std::endl;
	robot1.setEnergyPoints(0);
	robot1.attack(robotCopy2.getName());
	robot1.beRepaired(10);
	std::cout << std::endl << robot1;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "With no HP left:" << std::endl;
	robot.setAttackDamage(30);
	robot.attack(robot2.getName());
	robot2.takeDamage(robot.getAttackDamage());
	robot2.attack(robot.getName());
	robot2.beRepaired(1);
	std::cout << std::endl << robot << robotCopy << robot2 << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Destruction messages:" << std::endl;
	return (0);
}
