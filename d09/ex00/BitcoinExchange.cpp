#include "BitcoinExchange.hpp"
#include <algorithm>
#include <cctype>
#include <cstddef>
#include <exception>
#include <iostream>
#include <iterator>
#include <ostream>
#include <stdexcept>
#include <string>

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &) {}
// BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& src ) {
// return (src);} // TODO copy assign operator
BitcoinExchange::~BitcoinExchange() {}

/**
 * err_msg :
 *
 */
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
                             "format of 'date,floating-point_value' !");
  case DATE_FORMAT_ERR:
    throw std::runtime_error("Data is either not in the Data Base Format or "
                             "represents an invalid Date !");
  default:
    throw std::runtime_error("Exiting The Program !");
  };
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

void BitcoinExchange::header_check(string &line, string sep, string sec_fild) {

  size_t commaPos = -1;

  if ((commaPos = line.find(sep)) == string::npos ||
      string(line.begin(), line.begin() + commaPos) != "date")
    err_msg(DATA_BASE_HEADER_ERR);

  if (line.begin() + (commaPos + 1) != line.end())
    if (string(line.begin() + (commaPos + 1), line.end()) == sec_fild)
      return;

  err_msg(DATA_BASE_HEADER_ERR);
}

bool BitcoinExchange::is_float(const string &strfloat) {

  int comma = 0;
  char num;

  for (size_t i = 0; i < strfloat.size(); ++i) {
    num = strfloat.at(i);
    if ((num < 48 || num > 57) && num != 46) {
      std::cout << strfloat << std::endl;
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

void BitcoinExchange::data_base_parse(string &line) {

  size_t commaPos = -1;

  if ((commaPos = line.find(",")) == string::npos)
    err_msg(DATE_FORMAT_ERR);

  string key(line.begin(), line.begin() + commaPos);
  if (!is_DateFormat(key))
    err_msg(DATE_FORMAT_ERR);

  string value(line.begin() + 11, line.end());
  if (is_float(value) == false) {
    err_msg(DATE_FORMAT_ERR);
  }

  _dataBase.insert(std::make_pair(key, value));
}

bool BitcoinExchange::is_space(unsigned char c) { return std::isspace(c); }

bool BitcoinExchange::not_space(unsigned char c) { return !std::isspace(c); }

void BitcoinExchange::trim_string(string &value) {

  if (!value.empty())
    value.erase(value.begin(),
                std::find_if(value.begin(), value.end(), not_space));

  if (!value.empty())
    value.erase(std::find_if(value.begin(), value.end(), is_space),
                value.end());
}

void BitcoinExchange::readData() {

  std::ifstream file(DATA_BASE_PATH);
  string value;

  if (!(file.is_open()))
    err_msg(EMPTY_DTBASE_ERR);

  while (std::getline(file, value)) {
    trim_string(value);
    if (!value.empty()) {
      header_check(value, ",", "exchange_rate");
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

  print_map<std::map<string, string>>(
      std::map<string, string>::iterator(_dataBase.begin()));
}
