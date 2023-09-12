/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:06:41 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 23:38:17 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Order 66"), _signed(false), _gradeSign(5), _gradeExecute(5)
{
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false)
{
	std::cout << "Form " << name << ", parameter constructor called" << std::endl;
	const_cast<int&>(_gradeSign) = gradeSign;
	const_cast<int&>(_gradeExecute) = gradeExecute;
	return ;
}

Form::Form(const Form& copy) : _name(copy.getName()), _signed(copy.getSigned()), _gradeSign(copy.getGradeSign()), _gradeExecute(copy.getGradeExecute())
{
	std::cout << "Form " << copy.getName() << ", copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Form::~Form()
{
	std::cout << "Form " << _name << ", destructor called" << std::endl;
	return ;
}

Form &Form::operator=(Form const &copy)
{
	std::cout << "Form " << copy.getName() << ", copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		const_cast<std::string&>(this->_name) = copy.getName();
		this->_signed = copy.getSigned();
		const_cast<int&>(this->_gradeSign) = copy.getGradeSign();
		const_cast<int&>(this->_gradeExecute) = copy.getGradeExecute();
	}
	return (*this);
}

void	Form::beSigned(Bureaucrat &vorgon)
{
	if (vorgon.getGrade() > (int)_gradeSign)
		throw Form::GradeTooLowException();
	if (_signed)
		throw Form::AlreadySignedException();
	_signed = true;
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getGradeSign(void) const
{
	return(_gradeSign);
}

int	Form::getGradeExecute(void) const
{
	return(_gradeExecute);
}

std::string Form::getName(void) const
{
	return (_name);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High Exception");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low Exception");
}

const char* Form::AlreadySignedException::what() const throw() {
	return ("Already Signed Exception");
}

std::ostream &operator<<(std::ostream &outputFile, Form const &form)
{
	outputFile	<< "Form: " << form.getName() << ", grade to sign: "
			<< form.getGradeSign() << ", grade to execute"
			<< form.getGradeExecute() << "." << std::endl;
	return (outputFile);
}