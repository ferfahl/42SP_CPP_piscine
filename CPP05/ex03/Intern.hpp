/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:12:15 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 20:18:22 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define FORMS 3

class	Intern
{
	private:
		AForm	*_makeShrubberyCreationForm( std::string target );
		AForm	*_makeRobotomyRequestForm( std::string target );
		AForm	*_makePresidentialPardonForm( std::string target );
	public:
		Intern();
		Intern( Intern const& copy );
		~Intern();
		Intern &	operator=( Intern const &rhs );

		AForm		*makeForm( std::string name, std::string target );
};

#endif