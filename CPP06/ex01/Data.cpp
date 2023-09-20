/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:18:03 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 18:43:01 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("Robin Hood"), _value(1)
{
	return ;
}

Data::Data( std::string name, int value ) : _name(name), _value(value)
{
	return ;
}

Data::Data(const Data& copy) : _name(copy.getName()), _value(copy.getValue())
{
	return ;
}

Data::~Data()
{
	return ;
}

Data &Data::operator=(Data const &copy)
{
	if (this != &copy)
	{
		this->_name = copy.getName();
		this->_value = copy.getValue();
	}
	return (*this);
}

std::string	Data::getName() const
{
	return (_name);
}

int	Data::getValue() const
{
	return (_value);
}

std::ostream& operator<<(std::ostream& output, Data& data)
{
	output << "Name: " << data.getName() << std::endl
			<< "Value: " << data.getValue() << std::endl;
	return (output);
}