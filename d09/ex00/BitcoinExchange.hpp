#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <exception>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <sstream>
#include <string>

typedef std::string string;

class BitcoinExchange {
private:
  std::map<string, string> _dataBase;

public:
  /* enum class eErros provides a scoped enumeration */
  enum eErrors {
    FILE_OPEN_ERR = 1,
    EMPTY_DTBASE_ERR,
    DATA_BASE_HEADER_ERR,
    DATA_BASE_FORMAT_ERR,
    DATE_FORMAT_ERR,
  };

	/* Data-Base Path macro */
#define DATA_BASE_PATH "tests/data.csv"

  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &);
  BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  /* Error handling */
  void err_msg(eErrors error) const;

  /* Utilities */
  static bool is_char(unsigned char c);
  static bool is_space(unsigned char c);
  bool is_float(const string &strfloat);
  void trim_string(string &value);
  bool is_DateFormat(const string &input);

  /* Data-Base Processing */
  void readData();
  void data_base_parse(string &line);
  void header_check(string &line, string sep, string sec_fild);
};

#endif
