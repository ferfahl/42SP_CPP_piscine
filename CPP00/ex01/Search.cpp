/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:28:48 by feralves          #+#    #+#             */
/*   Updated: 2023/08/25 20:54:55 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::showPhoneBook(void)
{
	int	i;

	i = 0;
	if (this->nbrContacts == -1)
	{
		std::cout << "No contact info to display" << std::endl;
		return ;
	}
	while (i < this->nbrContacts + 1)
	{
		std::cout << this->contacts[i].getFirstName() << std::endl;
		i++;
	}
}