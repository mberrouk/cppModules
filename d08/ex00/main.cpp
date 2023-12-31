/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:31:57 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 20:31:58 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main() {

  std::vector<int> IntVector;
  int size = 15;

  std::cout << "<*> std::vector<int> IntVector = [";
  for (int i = 0; i < size; ++i) {
    IntVector.push_back(i);
    std::cout << IntVector[i] << ((i < size - 1) ? " " : "]\n");
  }

  try {
    std::cout << "[easyfind(IntVector, 10)] result: "
              << easyfind<std::vector<int> >(IntVector, 10) << std::endl;

    std::cout << "[easyfind(IntVector, 14)] result: "
              << easyfind<std::vector<int> >(IntVector, 14) << std::endl;

    std::cout << "[easyfind(IntVector, 600)] result: "
              << easyfind<std::vector<int> >(IntVector, 600) << std::endl;

  } catch (std::exception &e) {
    std::cout << e.what();
  }
	std::cout << std::endl;
/********************************************************************************/

  const std::vector<int> constIntVector(IntVector);

  std::cout << "<*> const std::vector<int> constIntVector = [";
  for (int i = 0; i < size; ++i) {
    std::cout << constIntVector[i] << ((i < size - 1) ? " " : "]\n");
  }

  try {
    std::cout << "[easyfind(constIntVector, 1)] result: "
              << easyfind<std::vector<int> >(constIntVector, 1) << std::endl;

    std::cout << "[easyfind(constIntVector, 5)] result: "
              << easyfind<std::vector<int> >(constIntVector, 5) << std::endl;

    std::cout << "[easyfind(constIntVector, 16)] result: "
              << easyfind<std::vector<int> >(constIntVector, 16) << std::endl;

	} catch (std::exception &e) {
    std::cout << e.what();
  }
	std::cout << std::endl;

/********************************************************************************/


  std::list<int> IntList;
  std::list<int>::iterator listIt = IntList.begin();

  std::cout << "<*> std::list<int> IntList = [";
  for (int i = 0; i < size; ++i) {
    IntList.push_back(i);
    std::cout << *++listIt << ((i < size - 1) ? " " : "]\n");
  }

  try {
    std::cout << "[easyfind(IntList, 10)] result: "
              << easyfind<std::list<int> >(IntList, 10) << std::endl;

    std::cout << "[easyfind(IntList, 14)] result: "
              << easyfind<std::list<int> >(IntList, 14) << std::endl;

    std::cout << "[easyfind(IntList, 600)] result: "
              << easyfind<std::list<int> >(IntList, 600) << std::endl;

	} catch (std::exception &e) {
    std::cout << e.what();
  }
	std::cout << std::endl;
/********************************************************************************/
   return 0;
}
