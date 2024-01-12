/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:05:26 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/12 09:06:00 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Canonical Form */

BitcoinExchange::BitcoinExchange() {
    readData();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) { *this = src; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &) {
  return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

/* Error handling */

void BitcoinExchange::err_msg(eErrors error) const {
  switch (error) {

  case FILE_OPEN_ERR:
    throw std::runtime_error("Could Not Open File !");
  
	case EMPTY_DTBASE_ERR:
    throw std::runtime_error("Could Not Open Data Base File Or Is Empty !");
  
	case DATA_BASE_HEADER_ERR:
    throw std::runtime_error(
        "The database should begin with the fields date,exchange_rate !");
  
	case DATA_BASE_FORMAT_ERR:
    throw std::runtime_error("Please ensure that the data base is in the "
                             "format of 'date,floating-value' !");
  case DATE_FORMAT_ERR:
    throw std::runtime_error("Data is either not in the Data Base Format or "
                             "represents an invalid Date !");
	case INPUT_VALUE_ERR:
		throw std::runtime_error("Please ensure that the input is in the "
                             "format of 'date | floating-value' !");
  case INPUT_HEADER_ERR: 
    throw std::runtime_error("The input should begin with `date | value` !");
  
  default:
    throw std::runtime_error("Exiting The Program !");
  };
}

/* Utilities */

bool BitcoinExchange::is_space(unsigned char c) { return std::isspace(c); }

bool BitcoinExchange::not_space(unsigned char c) { return !std::isspace(c); }

bool BitcoinExchange::is_float(const string &strfloat) {

  int comma = 0;
  char num;

  for (size_t i = 0; i < strfloat.size(); ++i) {
    num = strfloat.at(i);
    if ((num < 48 || num > 57) && num != 46) {
      return false;
    }
    if (num == 46) {
      if (i == 0)
        return (false);
      (comma++);
    }
  }
  if (strfloat.at(strfloat.size() - 1) == 46)
    return (false);

  return (comma > 1 ? false : true);
}

void BitcoinExchange::trim_string(string &value) {

	std::string::iterator it;
	for (it = value.begin(); it != value.end() && is_space(*it); ++it)
  ;

  if (!value.empty() && it != value.begin())
    value.erase(value.begin(), it);

	string::reverse_iterator rit;
	for (rit = value.rbegin(); rit != value.rend() && is_space(*rit); ++rit)
  ;

  if (!value.empty() && rit != value.rbegin())
    value.erase(rit.base(), value.end());
	
}

/**
 * is_DateFormat:
 * TODO: use sstream insted of atoi
 */
bool BitcoinExchange::is_DateFormat(const string &input) {

  if (input.size() != 10)
    return (false);

  if (input.find_first_not_of("-0123456789") != string::npos)
    return (false);

  if (input[4] != '-' || input[7] != '-')
    return (false);

  int year = std::atoi(input.substr(0, 4).c_str());
  int month = std::atoi(input.substr(5, 2).c_str());
  int day = std::atoi(input.substr(8, 2).c_str());

  if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
    return (false);

  if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    return (false);

  if (month == 2) {
    bool isLeapYear = ((!(year % 4) && !(year % 100)) || !(year % 400));
    if ((isLeapYear && day > 29) || (!(isLeapYear) && day > 28))
      return (false);
  }

  return (true);
}

void BitcoinExchange::header_check(string &line, string sep, string sec_fild, eErrors err) {

  size_t commaPos = -1;

	if ((commaPos = line.find(sep)) == string::npos ||
      string(line.begin(), line.begin() + commaPos) != "date") {
    err_msg(err);
	}
  
	if (line.begin() + (commaPos + sep.size()) != line.end())
    if (string(line.begin() + (commaPos + sep.size()), line.end()) == sec_fild)
      return;

  err_msg(err);
}

double BitcoinExchange::string_to_double(string &str, bool &flag) {

	std::stringstream strstream(str);
	double d;

	strstream >> std::noskipws >> d;

	if (!strstream.eof() || strstream.fail())
		flag = false;

	return (d);
}

/* Data-Base Processing */

void BitcoinExchange::readData() {

  std::ifstream file(DATA_BASE_PATH);
  string value;

  if (!(file.is_open()))
    err_msg(EMPTY_DTBASE_ERR);

  while (std::getline(file, value)) {
    trim_string(value);
    if (!value.empty()) {
      header_check(value, ",", "exchange_rate", DATA_BASE_HEADER_ERR);
      break;
    }
  }

  while (std::getline(file, value)) {
    trim_string(value);
    if (!value.empty())
      data_base_parse(value);
  }

  file.close();
  if (_dataBase.empty())
    err_msg(EMPTY_DTBASE_ERR);
}

void BitcoinExchange::data_base_parse(string &line) {

  size_t commaPos = -1;

  if ((commaPos = line.find(",")) == string::npos || 
			(line.begin() + commaPos + 1) == line.end())
    err_msg(DATE_FORMAT_ERR);

  string key(line.begin(), line.begin() + commaPos);
  if (!is_DateFormat(key))
    err_msg(DATE_FORMAT_ERR);

  string value(line.begin() + 11, line.end());
  if (is_float(value) == false) {
    err_msg(DATA_BASE_FORMAT_ERR);
  }

  _dataBase.insert(std::make_pair(key, value));
}

void BitcoinExchange::printData() const {

  print_map<std::map<string, string> >(
      std::map<string, string>::const_iterator(_dataBase.begin()), _dataBase);
}

/* Input Processing */

void BitcoinExchange::readInput(string inPath) {

	std::ifstream file(inPath.c_str());
	string line;

	if (!(file.is_open()))
		err_msg(FILE_OPEN_ERR);

	while (std::getline(file, line)) {
		trim_string(line);
		if (!line.empty()) {
			header_check(line, " | ", "value", INPUT_HEADER_ERR);
			break;
		}
	}

	while (std::getline(file, line)) {
		trim_string(line);
		if (!line.empty())
			input_parse(line);
	}

	file.close();
}

void BitcoinExchange::input_parse(string line) {

	size_t sep = -1;
	bool is_converted = true;
	double valNum;

	if ((sep = line.find("|")) == string::npos || 
			(line.begin() + sep + 1) == line.end()) {
		std::cout << "Error: bad input ==> " << line << std::endl;
		return;
	}

	string date(line.begin(), line.begin() + sep);
	trim_string(date);
	if (!(is_DateFormat(date)) || date < (_dataBase.begin())->first) {
		std::cout << "Error: bad input ==> " << date << std::endl;
		return;
	}
	
	string value(line.begin() + sep + 1, line.end());
	trim_string(value);
	if (is_float(value) == false) {
		std::cout << "Error: not a positive number." << std::endl;
		return;
	}

	valNum = string_to_double(value, is_converted);
	if (!is_converted) {
		std::cout << "Error: bad input ==> " << date << std::endl;
		return;
	}
	if (valNum > INT_MAX) {
		std::cout << "Error: too large a number." <<  std::endl;
		return;
	}

  std::map<string, string>::iterator itlow = _dataBase.lower_bound(date);
  if (itlow != _dataBase.begin() &&  itlow->first != date)
    --itlow;

	std::cout << std::setprecision(15) << date << " => " << value << " = " 
		<< valNum * string_to_double((itlow->second), is_converted) << std::endl;

	is_converted = true;
}
