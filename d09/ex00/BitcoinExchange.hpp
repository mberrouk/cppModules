/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:05:32 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/13 00:32:20 by mberrouk         ###   ########.fr       */
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
#include <climits>
#include <iomanip>

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

 /* Error handling */
  #define   FILE_OPEN_ERR throw std::runtime_error("Could Not Open File !")
  #define   EMPTY_DTBASE_ERR throw std::runtime_error("Could Not Open Data Base File Or Is Empty !");
  #define   DATA_BASE_HEADER_ERR throw std::runtime_error(\
        "The database should begin with the fields date,exchange_rate !");
  #define   DATA_BASE_FORMAT_ERR throw std::runtime_error(\
        "The database should begin with the fields date,exchange_rate !");
  #define   DATE_FORMAT_ERR throw std::runtime_error("Data is either not in the Data Base Format or "\
                             "represents an invalid Date !");
	#define	  INPUT_VALUE_ERR throw std::runtime_error("Please ensure that the input is in the "\
                             "format of 'date | floating-value' !");
  #define   INPUT_HEADER_ERR throw std::runtime_error("The input should begin with `date | value` !");


  /* Canonical Form */
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &);
  BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  /* Utilities */
  static bool is_space(unsigned char c);
  static bool not_space(unsigned char c);
  bool is_float(const string &strfloat);
  void trim_string(string &value);
  bool is_DateFormat(const string &input);
  void header_check(string &line, string sep, string sec_fild);
	double string_to_double(string &str, bool &flag);

  /* Utilities Templates */
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
