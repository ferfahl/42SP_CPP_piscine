/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:49:44 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 20:39:07 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	Willian = Zombie("Willian");;
	Zombie	*Charles = newZombie("Charles");

	Willian.announce();
	Charles->announce();

	delete Charles;

	randomChump("Edward");
	return (0);
}
