/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:17 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 23:12:45 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string const type);
		Animal(const Animal& copy);
		virtual	~Animal();
		Animal	&operator=(Animal const& copy);

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif