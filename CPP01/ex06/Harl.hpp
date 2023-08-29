/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:15:18 by feralves          #+#    #+#             */
/*   Updated: 2023/08/29 16:03:23 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class	Harl {
	void	debug();
	void	info();
	void	warning();
	void	error();
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif