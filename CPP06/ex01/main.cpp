/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:04 by feralves          #+#    #+#             */
/*   Updated: 2023/09/20 19:27:13 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	uintptr_t infoSerial = 0;
	Data* dataDeserialize;
	Data info("Taylor", 13);

	std::cout << "\nOriginal info:" << std::endl << info;
	
	std::cout << "\nInfo serialization:" << std::endl;
	infoSerial = Serializer::serialize(&info);
	std::cout << infoSerial << std::endl;
	
	dataDeserialize = Serializer::deserialize(infoSerial);
	std::cout << "\nInfo deserialization:" << std::endl << *dataDeserialize;

	return (0);
}
