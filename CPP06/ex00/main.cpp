/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 21:44:17 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int	wrongArgs(void)
{
	std::cout << "Wrong number of Arguments" << std::endl;
	std::cout << "Expected ./converter <argument>" << std::endl;
	return (false);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (wrongArgs());
	
	ScalarConversion	value;
	
	try {
		value.convert(std::string argv[1]);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << << std::endl>>;
		return (false);
	}
	return (0);
}