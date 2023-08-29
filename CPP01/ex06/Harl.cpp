/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:14:41 by feralves          #+#    #+#             */
/*   Updated: 2023/08/29 16:23:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void	Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*functionPointer[4])(void) = {	&Harl::debug,
													&Harl::info,
													&Harl::warning,
													&Harl::error,
	};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	if (i < 4)
	{
		for (int j = 0; j <= i; j++)
			(this->*functionPointer[j])();
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}