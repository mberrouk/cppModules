/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:31:11 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 21:49:35 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <climits>
#include <exception>
#include <iostream>
#include <set>
#include <sstream>
#include <stdexcept>
#include <vector>

class Span {
  unsigned int _N;
  std::vector<int> _arr;
  unsigned int _indexPos;

public:
  Span(unsigned int n);
  Span();
  Span &operator=(const Span &);
  ~Span() {}

  void addNumber(int num);
  void check_index() const;
  int shortestSpan() const;
	int longestSpan() const;

	int get_size() const;
  std::ostream &get_elements(std::ostream &out) const;
  void addRandNumber(unsigned int size);
};

std::ostream &operator<<(std::ostream &cot, const Span &obj);

#endif // !SPAN_HPP
