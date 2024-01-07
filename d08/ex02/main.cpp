/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:33:45 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 22:22:05 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
  {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size :" << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
      std::cout << "++> " << *it++ << std::endl;
    }

    it = mstack.begin();
    while (it != ite--) {
      std::cout << "--> " << *ite << std::endl;
    }
    std::stack<int> s(mstack);
  }
  std::cout << std::endl;

  {

    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    std::list<int>::iterator ite = mstack.end();
    ite--;
    mstack.erase(ite);
    std::cout << "size :" << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << "++> " << *it++ << std::endl;
    }

    it = mstack.begin();
    while (it != ite--) {
      std::cout << "--> " << *ite << std::endl;
    }
  }
  std::cout << std::endl;

  {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    const MutantStack<int> constStack(mstack);
    std::cout << "(mstack) size :" << mstack.size() << std::endl;
    std::cout << "(Conststack) size :" << constStack.size() << std::endl;

    MutantStack<int>::const_iterator itC = constStack.begin();
    MutantStack<int>::const_iterator iteC = constStack.end();
    while (itC != iteC) {
      std::cout << "++> " << *itC++ << std::endl;
    }

    itC = constStack.begin();
    while (itC != iteC--) {
      std::cout << "--> " << *iteC << std::endl;
    }
    std::stack<int> s(constStack);
  }

  return (0);
}
