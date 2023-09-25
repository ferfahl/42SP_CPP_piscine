/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:24 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 16:16:02 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sys/time.h>
# include <iomanip>
# include <cstring>
# include <deque>
# include <vector>
# include <algorithm>

class	PmergeMe
{
	private:

	public:
		PmergeMe();
		PmergeMe( PmergeMe const & copy );
		~PmergeMe();
		PmergeMe &		operator=( PmergeMe const & copy );

		void	run( char **input );


};

std::ostream &			operator<<( std::ostream & output, PmergeMe const & value );

#endif