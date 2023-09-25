/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:35:32 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 16:30:47 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	parseSequence( char **input )
{
	std::vector<int> seenNumbers;

	for (int i = 1; input[i]; i++)
	{
		for (int j = 0; input[i][j]; j++)
		{
			if (!isdigit(input[i][j]))
				return (false);
		}
		int	num = std::atoi(input[i]);
		for (size_t i = 0; i < seenNumbers.size(); i++)
			if (seenNumbers[i] == num)
				return (false);
		seenNumbers.push_back(num);
	}
	return (true);
}

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cout << "Error: missing integer sequence to be sorted" << std::endl
				<< "Usage: ./PmergeMe <sequence of unique positive integers>" << std::endl;
		return (1);
	}
	else if (!parseSequence(argv))
	{
		std::cout << "Error: Only unique integer numbers are allowed." << std::endl;
		return (1);
	}
	// try
	// {
	// 	PmergeMe p;

	// 	p.run(argv[1]);
	// }
	// catch (std::exception const& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// 	return (1);
	// }
	return (0);
}