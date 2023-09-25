/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:22 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 19:44:36 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors / Destructors / Overload operator = -> Canonical form */

PmergeMe::PmergeMe( void )
{ }

PmergeMe::PmergeMe( PmergeMe const &copy )
{
	*this = copy;
	return ;
}

PmergeMe::~PmergeMe( void )
{ }

PmergeMe &PmergeMe::operator=( PmergeMe const &copy )
{
	(void)copy;
	return (*this);
}

/* Methods */

void	PmergeMe::run( int quantity, char **input )
{
	_list(quantity, input);
	_vector(quantity, input);
}

/* Methods for list type */

void	PmergeMe::_sortPairs( std::list<std::pair<int, int> > &list, size_t size )
{
	if (size <= 1)
		return ;
	std::list<std::pair<int, int> >				left;
	std::list<std::pair<int, int> >				right;
	std::list<std::pair<int, int> >::iterator	it = list.begin();
	for (size_t i = 0; i < size / 2; i++)
		left.push_back(*it++);
	for (size_t i = size / 2; i < size; i++)
		right.push_back(*it++);
	list.clear();
	_sortPairs(left, left.size());
	_sortPairs(right, right.size());
	while (right.size() && left.size()) 
	{
		if (left.front().first < right.front().first)
		{
			list.push_back(left.front());
			left.pop_front();
		}
		else
		{
			list.push_back(right.front());
			right.pop_front();
		}
	}
	while (left.size())
	{
		list.push_back(left.front());
		left.pop_front();
	}
	while (right.size())
	{
		list.push_back(right.front());
		right.pop_front();
	}
	return ;
}

std::list<int>	PmergeMe::_sort( std::list<int> &list )
{
	if (list.size() <= 1)
		return (list);
	int straggler = -1;
	if (list.size() % 2 != 0)
	{
		straggler = list.back();
		list.pop_back();
	}
	std::list<std::pair<int, int> >	pairs;
	for (std::list<int>::iterator	it = list.begin(); it != list.end(); it++)
	{
		int first = *it++;
		int second = *it;
		if (first < second)
			pairs.push_back(std::make_pair(second, first));
		else
			pairs.push_back(std::make_pair(first, second));
	}
	_sortPairs(pairs, pairs.size());
	std::list<int>	sorted;
	std::list<int>	pend;
	for (std::list<std::pair<int, int> >::iterator	it = pairs.begin(); it != pairs.end(); it++)
	{
		sorted.push_back(it->first);
		pend.push_back(it->second);
	}
	if (straggler != -1)
		pend.push_back(straggler);
	sorted.push_front(pend.front());
	std::list<int>	insertSeq = insertionSequence<std::list<int> >(pend.size() - 1);
	if (insertSeq.size() != 0)
	{
		for (std::list<int>::iterator it = insertSeq.begin(); it != insertSeq.end(); it++) {
			int index = *it;
			std::list<int>::iterator itp = pend.begin();
			std::advance(itp, index);
			int element = *itp;
			if (element < sorted.front())
			{
				sorted.push_front(element);
			}
			else
			{
				std::list<int>::iterator	current;
				std::list<int>::iterator	next;
				for (std::list<int>::iterator its = sorted.begin(); its != sorted.end(); its++)
				{
					current = its++;
					next = its;
					if (element > *current && (element < *next || its == sorted.end()))
						break ;
					its = current;
				}
				sorted.insert(next, element);
			}
		}
	}
	return (sorted);
}

void	PmergeMe::_list( int quantity, char **input )
{
	std::list<int>	inputSequence;
	std::list<int>	finalSequence;
	clock_t			start = clock();

	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "\tSorting with std::list\n" << std::endl;
	for (int i = 1; i < quantity; i++)
		inputSequence.push_back(std::atoi(input[i]));
	std::cout << "Before : ";
	printSequence(inputSequence);
	finalSequence = _sort(inputSequence);
	std::cout << "\nAfter : ";
	printSequence(finalSequence);
	clock_t end = clock();
	double duration = double(end - start) / CLOCKS_PER_SEC;
	std::cout
			<< "\nTime to process a range of " << finalSequence.size()
			<< " elements with std::list : " << std::fixed << duration
			<< " seconds" << std::endl;
}

/* Methods for vector type */

void	PmergeMe::_sortPairs( std::vector<std::pair<int, int> > &vector, size_t size )
{
	size_t	i = 0;
	size_t	j = 0;
	size_t	k = 0;

	if (size <= 1)
		return ;
	std::vector<std::pair<int, int> >	left;
	std::vector<std::pair<int, int> >	right;
	for (size_t i = 0; i < size / 2; i++)
		left.push_back(vector[i]);
	for (size_t i = size / 2; i < size; i++)
		right.push_back(vector[i]);
	_sortPairs(left, left.size());
	_sortPairs(right, right.size());
	while (i < left.size() && j < right.size())
	{
		if (left[i].first < right[j].first)
			vector[k++] = left[i++];
		else
			vector[k++] = right[j++];
	}
	while (i < left.size()) 
		vector[k++] = left[i++];
	while (j < right.size())
		vector[k++] = right[j++];
}

std::vector<int>	PmergeMe::_sort( std::vector<int> &vector )
{
	if (vector.size() <= 1)
		return (vector);
	int straggler = -1;
	if (vector.size() % 2 != 0)
	{
		straggler = vector.back();
		vector.pop_back();
	}
	std::vector<std::pair<int, int> >	pairs;
	for (size_t i = 0; i < vector.size(); i += 2)
	{
		if (vector[i] < vector[i + 1])
			pairs.push_back(std::make_pair(vector[i + 1], vector[i]));
		else 
			pairs.push_back(std::make_pair(vector[i], vector[i + 1]));
	}
	_sortPairs(pairs, pairs.size());
	std::vector<int>	sorted;
	std::vector<int>	pend;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		sorted.push_back(pairs[i].first);
		pend.push_back(pairs[i].second);
	}
	if (straggler != -1)
		pend.push_back(straggler);
	sorted.insert(sorted.begin(), pend[0]);
	std::vector<int>	insertSeq = insertionSequence<std::vector<int> >(pend.size() - 1);
	if (insertSeq.size() != 0)
	{
		for (size_t i = 0; i < pend.size() - 1; i++) 
		{
			int element = pend[insertSeq[i]];
			if (element < sorted[0])
			{
				sorted.insert(sorted.begin(), element);
			}
			else
			{
				for (size_t j = 0; j < sorted.size(); j++)
				{
					if (element > sorted[j] && (element < sorted[j + 1] || j == sorted.size() - 1))
					{
						sorted.insert(sorted.begin() + j + 1, element);
						break ;
					}
				}
			}
		}
	}
	return (sorted);
}

void	PmergeMe::_vector( int quantity, char **input )
{
	std::vector<int>	inputSequence;
	std::vector<int>	finalSequence;
	clock_t				start = clock();

	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "\tSorting with std::vector\n" << std::endl;
	for (int i = 1; i < quantity; i++)
		inputSequence.push_back(std::atoi(input[i]));
	std::cout << "Before : ";
	printSequence(inputSequence);
	finalSequence = _sort(inputSequence);
	std::cout << "\nAfter : ";
	printSequence(finalSequence);
	clock_t	end = clock();
	double	duration = double(end - start) / CLOCKS_PER_SEC;
	std::cout
			<< "\nTime to process a range of " << finalSequence.size()
			<< " elements with std::vector : " << std::fixed << duration
			<< " seconds" << std::endl;
}
