#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <fstream>
#include <iostream>
#include <string>
#include <map>

enum eErrors {
  FILE_OPEN_ERR = 1,
  EMPTY_DTBASE_ERR,
  DATA_BASE_HEADER_ERR,
  DATA_BASE_FORMAT_ERR,
	DATE_FORMAT_ERR,
};


typedef std::string string;

class BitcoinExchange {
	std::map<string, string> _dataBase;
	public:
	BitcoinExchange();
	BitcoinExchange( const BitcoinExchange& );
	BitcoinExchange& operator=(const BitcoinExchange& );
	~BitcoinExchange();

	int get_DataBase(std::string filePath);
	bool is_DateFormat(const std::string &input);
	int err_msg(eErrors error);
};

#endif
