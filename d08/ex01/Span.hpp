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
  const unsigned int _N;
  std::vector<int> _arr;
  unsigned int _indexPos;

public:
  Span(unsigned int n);
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
