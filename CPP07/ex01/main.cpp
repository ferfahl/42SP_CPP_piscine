/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:51:47 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 15:41:33 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	std::cout << "\n----------------- Printing ---------------" << std::endl;
	char		alpha[11] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F'};
	std::string	tests[3] = {"River Song", "Amy Pond", "Rory Pond"};
	int			nbrs[7] = {1, 2, 3, 5, 7, 11, 13};

	std::cout << "------------------ Char ------------------" << std::endl;
	::iter(alpha, 11, printing);
	std::cout << "----------------- String -----------------" << std::endl;
	::iter(tests, 3, printing);
	std::cout << "------------------ Ints ------------------" << std::endl;
	::iter(nbrs, 7, printing);
	::iter(nbrs, 7, plusTen);
	std::cout << "-------------- Ints changed --------------" << std::endl;
	::iter(nbrs, 7, printing);

	return (0);
}
