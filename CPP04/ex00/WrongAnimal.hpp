/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:17 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 21:15:00 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(std::string const type);
		WrongAnimal(const WrongAnimal& copy);
		virtual	~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const& copy);

		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif