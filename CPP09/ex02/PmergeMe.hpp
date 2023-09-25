/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:24 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 17:43:58 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <sys/time.h>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <algorithm>
# include <vector> //chosen container
# include <list> //chosen container

class	PmergeMe
{
	private:
		float		_time;
		static void	_sort_pairs( std::list<std::pair<int, int> > &list, size_t size );
		static void	_sort_pairs( std::vector<std::pair<int, int> > &vector, size_t size );

	public:
		PmergeMe();
		PmergeMe( PmergeMe const & copy );
		~PmergeMe();
		PmergeMe &		operator=( PmergeMe const & copy );

		static std::list<int>	sort( std::list<int> &list );
		static std::vector<int>	sort( std::vector<int> &vector );
		bool					list( int quantity, char **input );
		bool					vector( int quantity, char **input );
		void					run( int quantity, char **input );

		class	ErrorInList : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	ErrorInVector : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

int						jacobsthal( int n );
std::ostream &			operator<<( std::ostream & output, PmergeMe const & value );

template<typename T>
void	printSequence(const T& sequence)
{
	typename T::const_iterator it;

	for (it = sequence.begin(); it != sequence.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename T>
T	insertionSequence(size_t size)
{
	T sequence;
	if (size < 1)
		return (sequence);
	int jacobsthal_iterator = 2;
	int next = jacobsthal(jacobsthal_iterator++);
	sequence.push_back(next);
	while (sequence.size() < size) {
		next = jacobsthal(jacobsthal_iterator++);
		if (next >= static_cast<int>(size))
			next = size;
		while (sequence.size() < size && next > 0) {
			sequence.push_back(next);
			if (std::find(sequence.begin(), sequence.end(), next - 1) != sequence.end())
				break ;
			next--;
		}
	}
	return (sequence);
}
#endif