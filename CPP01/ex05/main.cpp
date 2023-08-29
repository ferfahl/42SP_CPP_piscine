/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:15:00 by feralves          #+#    #+#             */
/*   Updated: 2023/08/29 16:11:10 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl2;

	Harl2.complain("DEBUG");
	Harl2.complain("INFO");
	Harl2.complain("WARNING");
	Harl2.complain("ERROR");
	Harl2.complain("NOT_VALID");
	return (0);
}