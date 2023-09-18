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
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int	main(void)
{
	std::cout << "\n--------- Intern making Forms ---------" << std::endl;
	Intern	coffeMaker;
	Bureaucrat zorgon("Prostetnic Vogon Kwaltz", 1);
	std::cout << "\n------- Presidential Pardon Form -------" << std::endl;
	AForm *fileForm = coffeMaker.makeForm("presidentialpardon", "Trillian");
	if (fileForm)
	{
		fileForm->beSigned(zorgon);
		fileForm->execute(zorgon);
	}
	delete fileForm;
	std::cout << "\n\n-------- Shrubbery Request Form --------" << std::endl;
	AForm *fileForm1 = coffeMaker.makeForm("shrubbery creation", "Knight");
	if (fileForm1)
	{
		fileForm1->beSigned(zorgon);
		fileForm1->execute(zorgon);
	}
	delete fileForm1;
	std::cout << "\n\n--------- Robotomy Request Form --------" << std::endl;
	AForm *fileForm2 = coffeMaker.makeForm("robotomyrequest", "Bender");
	if (fileForm2)
	{
		fileForm2->beSigned(zorgon);
		fileForm2->execute(zorgon);
	}
	delete fileForm2;
	std::cout << "\n\n------------ Invalid Form ------------" << std::endl;
	AForm *fileForm3 = coffeMaker.makeForm("who", "Doctor");
	(void)fileForm3;
	std::cout << "\n\n---------- Default Destructors ---------" << std::endl;
	return (0);
}
