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
		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F1 with 1 signed grade and 2 exec grade..." << std::endl;
			Form	F1("Form1", 1, 2);
			std::cout << F1 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}

		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F2 with 0 signed grade and 2 exec grade..." << std::endl;
			Form	F2("Form2", 0, 2);
			std::cout << F2 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F3 with 151 signed grade and 2 exec grade..." << std::endl;
			Form	F3("Form3", 151, 2);
			std::cout << F3 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F4 with 1 signed grade and 0 exec grade..." << std::endl;
			Form	F4("Form4", 1, 0);
			std::cout << F4 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
		
		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F5 with 1 signed grade and 151 exec grade..." << std::endl;
			Form	F5("Form5", 1, 151);
			std::cout << F5 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}

		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat1("Prostetnic Vogon Kwaltz", 1);
			std::cout << Bcrat1 << std::endl;
			std::cout << "Try new form F6 with 1 signed grade and 1 exec grade..." << std::endl;
			Form	F6("Form6", 1, 1);
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
		
		std::cout << "\n\n----------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat2("Prostetnic Vogon Jeltz", 2);
			std::cout << Bcrat2 << std::endl;
			std::cout << "Try new form F7 with 1 signed grade and 1 exec grade..." << std::endl;
			Form	F7("Form7", 1, 1);
			std::cout << F7 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7 << std::endl;
			std::cout << Bcrat2.getName() << "> +++Increment grade+++" << std::endl;
			Bcrat2.incrementGrade();
			std::cout << Bcrat2 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7 << std::endl;
			std::cout << Bcrat2.getName() << "> +++Increment grade+++" << std::endl;
			Bcrat2.incrementGrade();
			std::cout << Bcrat2 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "Grade out of range : " << e.what() << std::endl;}
	}

	std::cout << std::endl;
	return (0);
}
