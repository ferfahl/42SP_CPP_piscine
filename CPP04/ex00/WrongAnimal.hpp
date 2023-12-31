/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:17 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 14:38:32 by feralves         ###   ########.fr       */
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
		void	makeSound() const;
};

#endif