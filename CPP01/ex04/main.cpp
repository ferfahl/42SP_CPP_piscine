/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:48:48 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 21:09:07 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	errorInput(std::string str)
{
	std::cout << "Error: " << str << std::endl;
}

int	main(int argc, char *argv[])
{
	std::ifstream	inFile;
	std::ofstream	outFile;

	if (!checkInput(argc, argv, &inFile))
		return (1);
	if (!createOutFile(argv[1], &outFile))
		return (1);
	replaced(&inFile, &outFile, argv[2], argv[3]);
	inFile.close();
	outFile.close();
	std::cout << "Success" << std::endl;
	return (0);
}
