/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:34:28 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 16:14:31 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat::GradeTooHighException();
		Bureaucrat::GradeTooLowException();;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat(std::string const name, int const grade);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& b);
		
		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int const grade);
		void		incrementGrade();
		void		decrementGrade();
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat);

#endif