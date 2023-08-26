/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:19:42 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 15:03:16 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define CLEAN_WINDOW "\033[2J\033[1;1H"

class PhoneBook
{
	Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		int		nbrContacts;
		void	addNewContact();
		void	showPhoneBook();
		int		getNbrContact();
};


#endif