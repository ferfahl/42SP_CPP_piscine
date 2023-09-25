/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:19:07 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 12:42:45 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <map> //chosen container

class BitcoinExchange
{
	private:
		std::string						_inputFile;
		std::string						_dataFile;
		std::map<std::string, float>	_dataBase; //chosen container

		void	_initDataFile();
		void	_initInputFile();
		void	_calcBitcoin( std::string date, std::string value );
		float	_calcValue( std::string date, float value );
		bool	_isDigitOnly( std::string value );
		int		_validDate( std::string strDate );
		int		_checkYear( int year, int month, int day );
		int		_checkMonth( int month );
		int		_checkDay( int year, int month, int day );
		bool	_isLeap( int year );
	public:
		BitcoinExchange();
		BitcoinExchange( std::string inputFile );
		~BitcoinExchange();
		BitcoinExchange( BitcoinExchange const& copy );
		BitcoinExchange& operator=( BitcoinExchange const & src );

		void	initData();
};

#endif