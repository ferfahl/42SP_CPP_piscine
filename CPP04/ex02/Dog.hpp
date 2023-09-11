/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:25:15 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 22:56:52 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	Brain	*_dogBrain;

	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& copy);
		virtual	~Dog();
		Dog &operator=(Dog const& copy);

		virtual void	makeSound() const;
		Brain*			getBrain() const;
		std::string		getIdea(int index) const;
};

#endif