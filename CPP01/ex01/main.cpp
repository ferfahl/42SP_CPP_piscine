/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:49:44 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 11:05:28 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *newZombieHorde;
	int		N;

	N = 8;
	newZombieHorde = zombieHorde(N, "Mark");
	for (int i = 0; i < N; i++)
		newZombieHorde[i].announce();
	delete [] newZombieHorde;
	return (0);
}
