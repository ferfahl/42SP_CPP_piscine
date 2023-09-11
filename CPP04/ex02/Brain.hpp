/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:29:56 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 22:29:19 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <cstdlib>

class Brain
{
	static std::string _ideasDogs[100];
	static std::string _ideasCats[100];

	protected:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain &other);
		virtual ~Brain();
		Brain &operator=(const Brain &other);

		std::string getIdea() const;
		std::string getIdea(int index) const;
		std::string	getIdea(int index, std::string type) const;
		void		setIdea(int index, std::string idea);
};

#endif