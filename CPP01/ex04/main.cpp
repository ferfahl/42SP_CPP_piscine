/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:48:48 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 20:33:31 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replaced.hpp"

void	errorInput(std::string str)
{
	std::cout << "Error: " << str << std::endl;
}

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

int openOutFile(char *filename, std::ofstream &output)
{
	output.open(filename);
	if (output.fail())
	{
		errorInput("Can't open output file");
		return (FALSE);
	}
	return (TRUE);
}

int	createOutFile(char *filename, std::ofstream *output)
{
	char	*newFilename;

	newFilename = filename + ".replace";
	if (!openOutFile(newFilename, *output))
		return (FALSE);
	return (TRUE);
}

int	main(int argc, char *argv[])
{
	std::ifstream	inFile;
	std::ofstream	outFile;

	if (!checkInput(argc, argv, &inFile))
		return (1);
	if (!createOutFile(argv[1], &outFile))
		return (1);
	inFile.close();
	outFile.close();
	std::cout << "Success" <<std::endl;
	return (0);
}