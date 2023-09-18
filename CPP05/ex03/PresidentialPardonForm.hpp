/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:39:25 by feralves          #+#    #+#             */
/*   Updated: 2023/09/18 17:28:51 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target );
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(PresidentialPardonForm const& copy);

		void		execute(Bureaucrat const &executor) const;
		std::string	getTarget() const;

		class CreateFileException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif