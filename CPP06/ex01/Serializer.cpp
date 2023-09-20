/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:13 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 18:33:51 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	return ;
}

Serializer::Serializer(const Serializer& copy)
{
	(void)copy;
	return ;
}

Serializer::~Serializer()
{
	return ;
}

Serializer &Serializer::operator=(Serializer const &copy)
{
	(void)copy;
	return (*this);
}

uintptr_t	Serializer::serialize( Data* ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data*>(raw);
}