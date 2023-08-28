/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openFiles.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:37:58 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 20:41:06 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replaced.hpp"


int	openInFile(char *fileName, std::ifstream &input)
{
	input.open(fileName);
	if (!input.is_open())
	{
		errorInput("Can't open input file");
		return (FALSE);
	}
	return (TRUE);
}

int	checkInput(int argc, char *argv[], std::ifstream *input)
{
	if (argc != 4)
	{
		errorInput("Wrong number of arguments");
		errorInput("Usage: ./replace filename string1 string2");
		return (FALSE);
	}
	if (!openInFile(argv[1], *input))
		return (FALSE);
	return (TRUE);
}

int openOutFile(std::string filename, std::ofstream &output)
{
	output.open(filename.c_str());
	if (output.fail())
	{
		errorInput("Can't open output file");
		return (FALSE);
	}
	return (TRUE);
}

int	createOutFile(std::string filename, std::ofstream *output)
{
	std::string	newFilename;

	newFilename = filename + ".replace";
	if (!openOutFile(newFilename, *output))
		return (FALSE);
	return (TRUE);
}
