/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:20:43 by feralves          #+#    #+#             */
/*   Updated: 2023/08/26 15:50:01 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

class Contact
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	darkestSecret;
	std::string	phoneNumber;
	public:
		Contact();
		~Contact();
		std::string	getFirstName();
		void		keepFirstName(std::string firstName);
		std::string	getLastName();
		void		keepLastName(std::string lastName);
		std::string	getNickname();
		void		keepNickname(std::string nickname);
		std::string	getSecret();
		void		keepSecret(std::string secret);
		std::string	getPhone();
		int			keepPhone(std::string number);
		int			contactValue;
		bool		isValid;
};

#endif