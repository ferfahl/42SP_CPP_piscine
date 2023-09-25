/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:35:32 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 17:57:52 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	jacobsthal(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}

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
	// std::cout << "Before : ";
	// printSequence(seenNumbers);
	return (true);
}

int	main( int argc, char *argv[] )
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
	try
	{
		PmergeMe	p;

		p.run(argc, argv);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
