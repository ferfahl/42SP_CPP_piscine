/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:40:35 by feralves          #+#    #+#             */
/*   Updated: 2023/09/12 01:19:01 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137) , _target("Undefined")
{
	std::cout << "Shrubbery Creation Form default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form target parameter constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & copy) : AForm("Shrubbery Creation Form", 145, 137)
{
	*this = copy;
	std::cout << "Shrubbery Creation Form " << copy.getName() << ", copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form " << getName() << ", destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &copy )
{
	std::cout << "Shrubbery Creation Form " << copy.getName() << ", copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_target = copy.getTarget();
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	this->_checkExecute(executor);

	std::ofstream	ofs;
	std::string		fileName;
	
	fileName = this->getTarget() + "_shrubbery";
	ofs.open((fileName).c_str(), std::ofstream::out | std::ofstream::app);
	if (ofs.fail())
		return ;
	ofs << "               _{\ _{\{\/}/}/}__\n"
		<< "              {/{/\}{/{/\}(\}{/\} _\n"
		<< "             {/{/\}{/{/\}(_)\}{/{/\}  _\n"
		<< "          {\{/(\}\}{/{/\}\}{/){/\}\} /\}\n"
		<< "         {/{/(_)/}{\{/)\}{\(_){/}/}/}/}\n"
		<< "        _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}\n"
		<< "       {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}\n"
		<< "       _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}\n"
		<< "      {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}\n"
		<< "       {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}\n"
		<< "        {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)\n"
		<< "       {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}\n"
		<< "        {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}\n"
		<< "          {/({/{\{/{\{\/}(_){\/}/}\}/}(\}\n"
		<< "           (_){/{\/}{\{\/}/}{\{\)/}/}(_)\n"
		<< "             {/{/{\{\/}{/{\{\{\(_)/}\n"
		<< "              {/{\{\{\/}/}{\{\\}/}\n"
		<< "               {){/ {\/}{\/} \}\}\n"
		<< "               (_)  \.-'.-/\n"
		<< "           __...--- |'-.-'| --...__\n"
		<< "    _...--'   .-'   |'-.-'|  ' -.  --..__\n"
		<< "  -.    ' .  . '    |.'-._| '  . .  '   \n"
		<< "  .  '-  '    .--'  | '-.'|    .  '  . '\n"
		<< "           ' ..     |'-_.-|\n"
		<< "   .  '  .       _.-|-._ -|-._  .  '  .\n"
		<< "               .'   |'- .-|   '.\n"
		<< "   ..-'   ' .  '.   `-._.-'   .'  '  - .\n"
		<< "    .-' '        '-._______.-'     '  .\n";
	ofs.close();
}

const char* ShrubberyCreationForm::CreateFileException::what() const throw()
{
	return "What a pity... Something went wrong while creating the shrubbery";
}
