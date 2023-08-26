/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:10:17 by feralves          #+#    #+#             */
/*   Updated: 2023/08/25 18:08:24 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	capitalizeWords(char *str)
{
	while (*str){
		std::cout << (char)toupper(*str);
		str++;
	}
}

void	megaMessage(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

int	main(int argc, char *argv[]) 
{
	if (argc == 1)
		megaMessage();
	else
		for (int i = 1; i < argc; i++){
			capitalizeWords(argv[i]);
			if (i < argc - 1)
				std::cout << " ";
		}
	std::cout << std::endl;
	return 0;
}

