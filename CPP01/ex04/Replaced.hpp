/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replaced.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:49:05 by feralves          #+#    #+#             */
/*   Updated: 2023/08/28 20:41:27 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACED_HPP
# define REPLACED_HPP

# include <iostream>
# include <fstream>
# include <string>

# define FALSE 0
# define TRUE 1

int		createOutFile(std::string filename, std::ofstream *output);
int		checkInput(int argc, char *argv[], std::ifstream *input);
void	errorInput(std::string str);

#endif