/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:19 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 12:20:18 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	checkFile(const std::string& fileName)
{
	std::ifstream file;

	file.open(fileName.c_str());
	if (file.fail()){
		std::cerr << "Error: could not open file." << std::endl;
		file.close();
		return (true);
	}
	if (file.peek() == EOF){
		std::cerr << "Error: empty file." << std::endl;
		file.close();
		return (true);
	}
	file.close();
	return (false);
}

int main( int argc, char* argv[] )
{
	if (argc == 1) {
		std::cerr << "Error: missing file. Usage: ./btc <file>" << std::endl;
		return (1);
	}
	if (argc > 2) {
		std::cerr << "Error: to many args. Usage: ./btc <file>" << std::endl;
		return (1);
	}
	if (checkFile(argv[1]))
		return (1);
	try 
	{
		BitcoinExchange	btc(argv[1]);
		btc.initData();
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}