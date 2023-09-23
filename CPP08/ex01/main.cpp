/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:10:53 by feralves          #+#    #+#             */
/*   Updated: 2023/09/22 21:04:33 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "\n--------------- Main tests ---------------\n" << std::endl;
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const  std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------- Other tests ---------------" << std::endl;
	std::cout << "\n\tRepeated numbers" << std::endl;
	try
	{
		Span	sp = Span(8);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(100);
		sp.addNumber(3);
		sp.addNumber(1);
		sp.addNumber(9);
		sp.addNumber(9);
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (const  std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\tNegative numbers" << std::endl;
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(10);
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (const  std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\tMany numbers" << std::endl;
	try {
		std::multiset<int> manySp;
		for (int i = 0; i < 10001; i++)
			manySp.insert(i);

		Span sp = Span(10001);
		sp.addNumber(manySp.begin(), manySp.end());
		std::cout << "Longest Span: " << sp.longestSpan() << "\n";
		std::cout << "Shortest Span: " << sp.shortestSpan() << "\n";
	}
	catch (const  std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\tExceed Limits" << std::endl;
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(10);
		sp.addNumber(11);
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (const  std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\tExceed Limits (larger)" << std::endl;
	try
	{
		std::multiset<int> manySp;
		for (int i = 0; i < 1001; i++)
			manySp.insert(i + 2);
		Span sp = Span(1000);
		sp.addNumber(manySp.begin(), manySp.end());
		std::cout << "Longest Span: " << sp.longestSpan() << "\n";
		std::cout << "Shortest Span: " << sp.shortestSpan() << "\n";
	}
	catch (const  std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\tEmpty Span" << std::endl;
	try
	{
		Span sp = Span(0);
		std::cout << "Longest Span: " << sp.longestSpan() << "\n";
		std::cout << "Shortest Span: " << sp.shortestSpan() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}












// ordena o conteiner ordenado 
// passa uma vez a diferenca dele pro proximo 