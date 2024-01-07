/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:33:50 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 22:20:13 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MutantStack_HPP

#include <deque>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {

public:
  MutantStack() {}
  ~MutantStack() {}
  MutantStack(const MutantStack &obj) : std::stack<T>(obj) { *this = obj; }
  MutantStack<T> &operator=(const MutantStack &src) {
    if (this != &src)
      *(std::stack<T> *)this = *(std::stack<T> *)&src;
    return *this;
  }
  
  typedef typename std::deque<T>::iterator iterator;
  typedef typename std::deque<T>::reverse_iterator reverse_iterator;
  typedef typename std::deque<T>::const_iterator const_iterator;
  typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
  
  iterator begin()  { return this->c.begin(); }
  const_iterator begin() const { return this->c.begin(); }
  const_iterator cbegin() const { return this->c.cbegin(); }
  
  iterator end() { return this->c.end(); }
  const_iterator end() const { return this->c.end(); }
  const_iterator cend() const { return this->c.cend(); }
  
  reverse_iterator rend() { return this->c.rend(); }
  const_reverse_iterator rend() const { return this->c.rend(); }
  const_reverse_iterator crend() const { return this->c.crend(); }
  
  reverse_iterator rbegin() { return this->c.rbegin(); }
  const_reverse_iterator rbegin() const { return this->c.rbegin(); }
  const_reverse_iterator crbegin() const { return this->c.crbegin(); }

};

#endif
