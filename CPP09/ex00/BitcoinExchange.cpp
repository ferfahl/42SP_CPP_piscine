/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:19:21 by feralves          #+#    #+#             */
/*   Updated: 2023/09/25 16:06:02 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Constructors / Destructors / Overload operator = -> Canonical form */

BitcoinExchange::BitcoinExchange( void ) : _inputFile("input.txt"), _dataFile("data.csv")
{ }

BitcoinExchange::BitcoinExchange( std::string inputFile ) : _inputFile(inputFile), _dataFile("data.csv")
{ }

BitcoinExchange::~BitcoinExchange( void )
{
	return ;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& copy )
{
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=( BitcoinExchange const & copy )
{
	if (this != &copy)
	{
		this->_inputFile = copy._inputFile;
		this->_dataFile = copy._dataFile;
	}
	return (*this);
}

/* Methods */

void	BitcoinExchange::initData()
{
	_initDataFile();
	_initInputFile();
}

void	BitcoinExchange::_initDataFile()
{
	std::ifstream	ifs;
	std::string		date, value, line;

	ifs.open(this->_dataFile.c_str());
	if (ifs.fail())
		throw std::runtime_error("Could not open file: 'data.csv'.");
	std::getline(ifs, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Invalid format header.");
	while (std::getline(ifs, line))
	{
		size_t pos = line.find(',');
		
		date = line.substr(0, pos);
		value = line.substr(pos + 1);
		float rate = atof(value.c_str());
		_dataBase[date] = rate;
	}
	ifs.close();
}

void	BitcoinExchange::_initInputFile()
{
	std::ifstream	ifs;
	std::string		line, date, value;

	ifs.open(this->_inputFile.c_str());
	std::getline(ifs, line);
	if (line != "date | value")
		throw std::runtime_error("Invalid format header.");
	while (std::getline(ifs, line)){
		if (line.find("|") == std::string::npos || line.empty())
			std::cout << "Error: bad input => " << line << std::endl;
		else
		{
			size_t pos = line.find('|');
			date = line.substr(0, pos);
			value = line.substr(pos + 1);
			_calcBitcoin(date, value);
		}
	}
}

bool	BitcoinExchange::_isDigitOnly( std::string value )
{
	for (size_t i = 1; i < value.length(); i++)
	{
		if (value[i] < '0' || value[i] > '9')
		{
			if (value[i] == '+' && i > 0)
				return (false);
			if (value[i] == '-' && i > 0)
				return (false); 
			if (value[i] != '+' && value[i] != '-' && value[i] != '.')
				return (false);
		}
	}
	return (true);
}

void	BitcoinExchange::_calcBitcoin( std::string date, std::string value )
{
	float rate = atof(value.c_str());
	
	if (_validDate(date))
	{
		std::cout << "Error: Invalid date." << std::endl;
		return ;
	}
	if (!_isDigitOnly(value))
		std::cout << "Error: invalid number." << std::endl;
	else if (rate < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (rate > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
	{
		float result = _calcValue(date, rate);
		std::cout << date << "=> " << value << " = " << result << std::endl;
	}
}

float	BitcoinExchange::_calcValue(std::string date, float value)
{
	std::map<std::string, float>::iterator	it;

	it = _dataBase.find(date);
	if (it != _dataBase.end())
		return (it->second * value);
	for (it = _dataBase.begin(); it != _dataBase.end(); it++)
	{
		std::map<std::string, float>::iterator	next = it;
		next++;
		if (((date >= it->first) && (next == _dataBase.end())) || ((date >= it->first) && (date < next->first)))
			return (it->second * value);
	}
	return (0);
}

int	BitcoinExchange::_validDate(std::string strDate)
{
	std::stringstream	ss(strDate);
	char	delimiter;
	int		year, month, day;

	if (strDate.length() != 11)
		return (1);
	if (!(ss >> year >> delimiter >> month >> delimiter >> day))
		return (1);
	if (_checkYear(year, month, day) || _checkMonth(month) || _checkDay(year, month, day))
		return (1);
	return (0);
}

int	BitcoinExchange::_checkYear(int year, int month, int day)
{
	if (year < 2009 || year > 2023)
		return (1);
	if (year == 2009 && month == 01 && day == 01)
		return (1);
	return (0);
}

int	BitcoinExchange::_checkMonth(int month)
{
	if (month < 1 || month > 12)
		return (1);
	return (0);
}

int	BitcoinExchange::_checkDay(int year, int month, int day)
{
	int maxDay = 31;

	if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		maxDay = 30;
	else if (month == 02)
		maxDay = _isLeap(year) ? 29 : 28;
	if (day > maxDay)
		return (1);
	return (0);
}

bool	BitcoinExchange::_isLeap(int year)
{
	return ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)));
}
