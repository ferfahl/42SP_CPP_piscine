/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralvesstudent.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:34:03 by feralves          #+#    #+#             */
/*   Updated: 2023/09/11 23:05:09 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		std::cout << "\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form with 1 signed grade and 2 exec grade..." << std::endl;
			Form	F1("form01", 1, 2);
			std::cout << F1 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}

		std::cout << "\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form with 0 signed grade and 2 exec grade..." << std::endl;
			Form	F2("form02", 0, 2);
			std::cout << F2 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form with 151 signed grade and 2 exec grade..." << std::endl;
			Form	F3("form13", 151, 2);
			std::cout << F3 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F4 with 1 signed grade and 0 exec grade..." << std::endl;
			Form	F4("form42", 1, 0);
			std::cout << F4 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form with 1 signed grade and 151 exec grade..." << std::endl;
			Form	F5("form520", 1, 151);
			std::cout << F5 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}

		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat1("Prostetnic Vogon Kwaltz", 1);
			std::cout << Bcrat1 << std::endl;
			std::cout << "Try new form with 1 signed grade and 1 exec grade..." << std::endl;
			Form	F6("form0006", 1, 1);
			std::cout << F6 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat1.signForm(F6);
			std::cout << "Update of " << F6 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat1.signForm(F6);
			std::cout << "Update of " << F6 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n----------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat2("Prostetnic Vogon Jeltz", 3);
			std::cout << Bcrat2 << std::endl;
			std::cout << "Try new form with 1 signed grade and 1 exec grade..." << std::endl;
			Form	F7("form77", 1, 1);
			std::cout << F7 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7 << std::endl;
			std::cout << Bcrat2.getName() << " -> Increment grade" << std::endl;
			Bcrat2.incrementGrade();
			std::cout << Bcrat2 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7 << std::endl;
			Bcrat2.incrementGrade();
			std::cout << Bcrat2.getName() << " -> Increment grade" << std::endl;
			std::cout << Bcrat2 << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
	}

	std::cout << std::endl;
	return (0);
}
