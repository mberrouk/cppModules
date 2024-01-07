/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:31:07 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 20:31:08 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _N(n), _arr(n), _indexPos(0) {}

void Span::addNumber(int num) {

  if (_indexPos == _N)
    throw std::runtime_error(
        static_cast<std::ostringstream &>(std::ostringstream() << _N).str() +
        " elements stored!");

  _arr[_indexPos++] = num;
}

void Span::check_index() const {

  if (_indexPos == 0)
    throw std::runtime_error("No Numbers Stored!");
  if (_indexPos == 1)
    throw std::runtime_error("Only One Number Stored!");
}

int Span::shortestSpan() const {

  check_index();
  std::set<int> copylist(_arr.begin(), _arr.end());
  std::set<int>::iterator it(copylist.begin());
  std::set<int>::iterator sIt(it);
  int res = INT_MAX;
  int small;

  for (sIt++; sIt != copylist.end(); ++it, ++sIt) {
    if ((small = abs(*it - *sIt)) < res)
      res = small;
  }

  if (res == INT_MAX)
    throw std::runtime_error("No Span Can Be Found!");
  return (res);
}

int Span::longestSpan() const {

  check_index();
  std::vector<int>::const_iterator itMax(
      std::max_element(_arr.begin(), _arr.end()));
  std::vector<int>::const_iterator itMin(
      std::min_element(_arr.begin(), _arr.end()));
  if (*itMax == *itMin)
    throw std::runtime_error("No Span Can Be Found!");
  return (abs(*itMax - *itMin));
}

int Span::get_size() const { return _indexPos; }

std::ostream &Span::get_elements(std::ostream &out) const {
  std::vector<int>::const_iterator it = _arr.begin();
  for (; it != _arr.end(); ++it)
    out << *it << " ";
  return out;
}

void Span::addRandNumber(unsigned int size) {

  if (_indexPos == _N)
    throw std::runtime_error(
        static_cast<std::ostringstream &>(std::ostringstream() << _N).str() +
        " elements stored!");
  if (_arr.empty())
    throw std::runtime_error("Is empty (range value 0)!");

  for (unsigned int i = 0; i < size; ++i) {
    std::srand(time(0) + i);
    this->addNumber(std::rand() % size);
  }
}

std::ostream &operator<<(std::ostream &cot, const Span &obj) {
  return obj.get_elements(cot);
}
