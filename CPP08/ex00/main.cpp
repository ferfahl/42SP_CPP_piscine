/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:32:07 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 20:10:10 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	{
		std::cout << "\n------------------ List ------------------" << std::endl;
		
			std::list<int>	list;

			std::cout << "Fill it " << std::endl;
			for (int i = 0; i < 20; i++)
				list.push_back(i + 1);
			std::cout << "Print it " << std::endl;
			std::list<int>::iterator arrayIterator = list.begin();
			std::cout << "[ ";
			while (arrayIterator != list.end())
			{
				std::cout << *arrayIterator << " ";
				arrayIterator++;
			}
			std::cout << "]" << std::endl;
			std::cout << "Getting item 07" << std::endl;
			try
			{
				std::list<int>::iterator try1 = easyFind(list, 7);
				std::cout << "found '" << *try1
						<< "' at index: " << std::distance(list.begin(), try1) << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "Getting item 13" << std::endl;
			try
			{
				std::list<int>::iterator try1 = easyFind(list, 13);
				std::cout << "found '" << *try1
						<< "' at index: " << std::distance(list.begin(), try1) << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "Getting item 42" << std::endl;
			try
			{
				std::list<int>::iterator try1 = easyFind(list, 42);
				std::cout << "found '" << *try1
						<< "' at index: " << std::distance(list.begin(), try1) << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			
	}
	return (0);
}
