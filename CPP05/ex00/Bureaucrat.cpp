/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:33:54 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 16:14:08 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Jerry"), _grade(75)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	//init
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name)
{
	std::cout << "Bureaucrat parameter constructor called" << std::endl;
	setGrade(grade);
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat " << copy.getName() << " copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	std::cout << "Bureaucrat " << copy.getName() << " copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy.getName();
		this->_grade = copy.getGrade();
	}
	return (*this);
}

void	Bureaucrat::setGrade(int const grade)
{
	if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

int	Bureaucrat::getGrade(void) const
{
	return(_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

void	Bureaucrat::incrementGrade(void)
{
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade++;
}