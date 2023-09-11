/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:42 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 22:19:11 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain	*_catBrain;

	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& copy);
		virtual	~Cat();
		Cat &operator=(Cat const& copy);

		virtual void	makeSound() const;
		Brain*			getBrain() const;
		std::string		getIdea(int index) const;
};

#endif