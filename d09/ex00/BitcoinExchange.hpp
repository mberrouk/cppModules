/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:05:32 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/12 08:11:54 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <sstream>

typedef std::string string;

class BitcoinExchange {
private:

  std::map<string, string> _dataBase;

  /* Data-Base Processing */
  void readData();
  void data_base_parse(string &line);

public:
  /* Data-Base Path macro */
#define DATA_BASE_PATH "tests/data.csv"

  /* enumeration errors */
  enum eErrors {
    FILE_OPEN_ERR = 1,
    EMPTY_DTBASE_ERR,
    DATA_BASE_HEADER_ERR,
    DATA_BASE_FORMAT_ERR,
    DATE_FORMAT_ERR,
		INPUT_VALUE_ERR,
    INPUT_HEADER_ERR,
  };

  /* Canonical Form */
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &);
  BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  /* Error handling */
  void err_msg(eErrors error) const;

  /* Utilities */
  static bool is_space(unsigned char c);
  static bool not_space(unsigned char c);
  bool is_float(const string &strfloat);
  void trim_string(string &value);
  bool is_DateFormat(const string &input);
  void header_check(string &line, string sep, string sec_fild, eErrors err);
	double string_to_double(string &str, bool &flag);

  /* Templates Utilities */
  template <typename T>
  void print_map(typename T::const_iterator mapIt, const T &map) const {

    for (; mapIt != map.end(); ++mapIt)
      std::cout << mapIt->first << " " << mapIt->second << std::endl;
  }

  /* Data-Base Processing */
  void printData() const;

	/* Input processing */
	void readInput(string);
	void input_parse(string);
};

#endif
