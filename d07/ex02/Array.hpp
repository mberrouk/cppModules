/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:45:46 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/03 19:57:14 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <stdexcept>
template <typename T>
class Array {
public:
  Array() : _arr(NULL), _size(0) {}

  Array(const unsigned int n) : _arr( n ? new T[n]() : NULL), _size(n) {}

  Array(const Array &src) : _arr(NULL) { *this = src; }

  Array &operator=(const Array &src) {
    if (this != &src) {
      if (this->_arr)
        delete[] _arr;
      this->_size = src.size();
      this->_arr = this->_size ? new T[this->_size]() : NULL;
      for (size_t i = 0; i < this->_size; i++)
        this->_arr[i] = src._arr[i];
    }
    return (*this);
  }

  T &operator[](int index) {
    if (index >= this->size() || index < 0) {
      throw std::runtime_error("Index Is Out Of Bounds.");
    }
    return (_arr[index]);
  }
  
  T const &operator[](int index) const {
    if (index >= this->size() || index < 0) {
      throw std::runtime_error("Index Is Out Of Bounds.");
    }
    return (_arr[index]);
  }
  
  ~Array() { delete[] _arr; }

  int size() const { return (this->_size); }

private:
  T *_arr;
  unsigned int _size;
};

#endif
