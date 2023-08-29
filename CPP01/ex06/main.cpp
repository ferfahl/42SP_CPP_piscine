/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:15:00 by feralves          #+#    #+#             */
/*   Updated: 2023/08/29 16:19:25 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	Harl2;

	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl
			<< "Usage: ./harlFilter 'string'" << std::endl
			<< "string can be: WARNING, ERROR, DEBUG, INFO or another complaint" << std::endl;
	}
	else
		Harl2.complain(argv[1]);
	return (0);
}