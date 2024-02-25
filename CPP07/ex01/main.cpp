/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:51:47 by feralves          #+#    #+#             */
/*   Updated: 2024/02/25 18:47:58 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int	main( void )
// {
// 	std::cout << "\n----------------- Printing ---------------" << std::endl;
// 	char		alpha[11] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F'};
// 	std::string	tests[3] = {"River Song", "Amy Pond", "Rory Pond"};
// 	int			nbrs[7] = {1, 2, 3, 5, 7, 11, 13};

// 	std::cout << "------------------ Char ------------------" << std::endl;
// 	::iter(alpha, 11, printing<char>);
// 	std::cout << "----------------- String -----------------" << std::endl;
// 	::iter(tests, 3, printing<std::string>);
// 	std::cout << "------------------ Ints ------------------" << std::endl;
// 	::iter(nbrs, 7, printing<int>);
// 	::iter(nbrs, 7, plusTen<int>);
// 	std::cout << "-------------- Ints changed --------------" << std::endl;
// 	::iter(nbrs, 7, printing<int>);

// 	return (0);
// }
// Ruler function
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
