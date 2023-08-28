/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:49:34 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 11:00:19 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define TRUE 1
# define FALSE 0

class Zombie
{
	std::string	name;
	public:
		Zombie();
		Zombie(std::string str);
		~Zombie();
		void	announce(void);
		void	putName(std::string str);
};

Zombie	*newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif