/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:20:43 by feralves          #+#    #+#             */
/*   Updated: 2023/08/25 18:41:53 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

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
		void		keepPhone(std::string number);
}

#endif