#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange( const BitcoinExchange&  ) {}
// BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& src ) { return (src);} // TODO copy assign operator
BitcoinExchange::~BitcoinExchange() {}

/**
 * err_msg :
 * TODO: throw exceptions
 *
 */
int BitcoinExchange::err_msg(eErrors error) {
  std::cout << "Error: ";
  switch (error) {
  case 1:
    std::cout << "Could Not Open File!" << std::endl;
    return (error);
  case 2:
    std::cout << "Data Base Is Empty!" << std::endl;
    return (error);
  case 3:
    std::cout
        << "The database should begin with the fields date,exchange_rate !"
        << std::endl;
    return (error);
	case 4:
		std::cout
			<< "Please ensure that the data base is in the format of 'data,floating-point_value' !"
			<< std::endl;
		return (error);
	case 5:
		std::cout
			<< "Data is either not in the date format or represents an invalid date !"
			<< std::endl;
		return (error);

  };
  return (error);
}


/**
 * is_DateFormat:
 * TODO: use sstream insted of atoi 
 */
bool BitcoinExchange::is_DateFormat(const std::string &input) {
	if (input.size() != 10) return (false);
	if (input[4] != '-' || input[7] != '-') return (false);

	std::string strYear(input.substr(0, 4));
	std::string strMonth(input.substr(5, 2));
	std::string strDay(input.substr(8, 2));

	int year = std::atoi(strYear.c_str());
	int month = std::atoi(strMonth.c_str());
	int day = std::atoi(strDay.c_str());

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return (false);
	if (month == 2) {
		bool isLeapYear = ((!(year % 4) && !(year % 100)) || !(year % 400));
		if ((isLeapYear && day > 29) || (!(isLeapYear) && day > 28)) return (false);
	}
	return (true);
}

/**
 * get_DataBase:
 * TODO: use _dataBase;
 * TODO: check value format (float)
 * TODO: close file
 *
 */
int BitcoinExchange::get_DataBase(std::string filePath) {

	
  std::ifstream file(filePath.c_str());

  if (!file)
    return err_msg(FILE_OPEN_ERR);

  std::istream_iterator<std::string> fileIt(file);
  std::istream_iterator<std::string> eos;

  size_t commaPos = -1;

	std::map<std::string, double> storage;
  
	std::map<std::string, double>::iterator mapIt;
	if ((commaPos = (*fileIt).find(",")) == std::string::npos)
    return (err_msg(DATA_BASE_HEADER_ERR));

  if (fileIt->begin() + (commaPos + 1) != fileIt->end())
    if (std::string(fileIt->begin() + (commaPos + 1), fileIt->end()) !=
        "exchange_rate")
      return (err_msg(DATA_BASE_HEADER_ERR));


  while (++fileIt != eos) {
    if ((commaPos = (*fileIt).find(",")) == std::string::npos)
      return (err_msg(DATA_BASE_FORMAT_ERR));
    std::string key(fileIt->begin(), fileIt->begin() + commaPos);
		if (!is_DateFormat(key)) return (err_msg(DATE_FORMAT_ERR));
		std::stringstream is(std::string(fileIt->begin() + 11, fileIt->end()).c_str());
		double val;
		is >> val;
		// std::cout << "-> " << std::setprecision (15) << val << " "<< is.str() << std::endl;
		storage.insert(std::make_pair(key, static_cast<double>(val)));
  }

		for (mapIt = storage.begin(); mapIt != storage.end(); ++mapIt) 
			std::cout << std::setprecision(15) << mapIt->first << " " << mapIt->second << std::endl;

  return (0);

}
