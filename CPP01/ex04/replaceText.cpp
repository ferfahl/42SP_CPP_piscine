/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceText.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:47:46 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 21:09:29 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::string	convert(std::string line, std::string str1, std::string str2)
{
	std::size_t	index;

	index = line.find(str1);
	while (index != std::string::npos)
	{
		line.erase(index, str1.length());
		line.insert(index, str2, 0, str2.length());
		index = line.find(str1);
	}
	return (line);
}

void	writeNewFile(std::ofstream &outFile, std::string line)
{
	outFile << line << std::endl;
}

void	replaced(std::ifstream *inFile, std::ofstream *outFile, std::string str1, std::string str2)
{
	std::string	buffer;

	while (std::getline(*inFile, buffer))
	{
		buffer = convert(buffer, str1, str2);
		writeNewFile(*outFile, buffer);
	}
}