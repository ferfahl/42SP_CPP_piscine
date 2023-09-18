/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:40:44 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 18:52:48 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target );
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const& copy);

		void		execute(Bureaucrat const &executor) const;
		std::string	getTarget() const;

		class CreateFileException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif