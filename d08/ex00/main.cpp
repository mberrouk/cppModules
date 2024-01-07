#include "easyfind.hpp"
#include <array>
#include <iostream>
#include <list>
#include <vector>

int main() {

  const std::vector<int> constIntVector = {1, 2, 3, 4, 5};

  std::cout << "<*> const std::vector<int> constIntVector = [";
  for (int i = 0; i < 5; ++i) {
    std::cout << constIntVector[i] << ((i < 4) ? " " : "]\n");
  }

  try {
    std::cout << "[easyfind(constIntVector, 1)] result: "
              << easyfind<std::vector<int>>(constIntVector, 1) << std::endl;

    std::cout << "[easyfind(constIntVector, 5)] result: "
              << easyfind<std::vector<int>>(constIntVector, 5) << std::endl;

    std::cout << "[easyfind(constIntVector, 6)] result: "
              << easyfind<std::vector<int>>(constIntVector, 6) << std::endl;

	} catch (std::exception &e) {
    std::cout << e.what();
  }
	std::cout << std::endl;

/********************************************************************************/
  std::vector<int> IntVector;
  int size = 15;

  std::cout << "<*> std::vector<int> IntVector = [";
  for (int i = 0; i < size; ++i) {
    IntVector.push_back(i);
    std::cout << IntVector[i] << ((i < size - 1) ? " " : "]\n");
  }

  try {
    std::cout << "[easyfind(IntVector, 10)] result: "
              << easyfind<std::vector<int>>(IntVector, 10) << std::endl;

    std::cout << "[easyfind(IntVector, 14)] result: "
              << easyfind<std::vector<int>>(IntVector, 14) << std::endl;

    std::cout << "[easyfind(IntVector, 600)] result: "
              << easyfind<std::vector<int>>(IntVector, 600) << std::endl;

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
              << easyfind<std::list<int>>(IntList, 10) << std::endl;

    std::cout << "[easyfind(IntList, 14)] result: "
              << easyfind<std::list<int>>(IntList, 14) << std::endl;

    std::cout << "[easyfind(IntList, 600)] result: "
              << easyfind<std::list<int>>(IntList, 600) << std::endl;

	} catch (std::exception &e) {
    std::cout << e.what();
  }
	std::cout << std::endl;
/********************************************************************************/

  std::array<int, 5> Intarr = {1, 2, 3, 4};

  std::cout << "<*> std::array<int, 5> Intarr = [";
  for (int i = 0; i < 4; i++)
    std::cout << Intarr[i] << ((i < 3) ? " " : "]\n");

  try {
    std::cout << "[easyfind(Intarr, 1)] result: "
              << easyfind<std::array<int, 5>>(Intarr, 1) << std::endl;

    std::cout << "[easyfind(Intarr, 4)] result: "
              << easyfind<std::array<int, 5>>(Intarr, 4) << std::endl;

    std::cout << "[easyfind(Intarr, 600)] result: "
              << easyfind<std::array<int, 5>>(Intarr, 600) << std::endl;

	} catch (std::exception &e) {
    std::cout << e.what();
  }
	std::cout << std::endl;

  return 0;
}
