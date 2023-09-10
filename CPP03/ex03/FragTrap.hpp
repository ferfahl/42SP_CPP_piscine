/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:47:25 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 18:03:08 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const& copy);
		~FragTrap();
		FragTrap	&operator=(FragTrap const& copy);

		void		highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &outputFile, FragTrap const &r);

#endif