/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:49:05 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 21:10:04 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

# define FALSE 0
# define TRUE 1

int		createOutFile(std::string filename, std::ofstream *output);
int		checkInput(int argc, char *argv[], std::ifstream *input);
void	errorInput(std::string str);
void	replaced(std::ifstream *inFile, std::ofstream *outFile, std::string str1, std::string str2);

#endif