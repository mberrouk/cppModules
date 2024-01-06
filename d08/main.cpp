#include "easyfind.hpp"
#include <vector>

int main (int argc, char *argv[]) {
  // const std::vector<int> constIntVector(5);
  const std::vector<int> constIntVector = {1, 2, 3, 4, 5};
  for (int i = 0; i < 12; ++i) {
  /*   constIntVector.push_back(i); */
    std:: cout << constIntVector[i] << ((i < 11) ? " " : "\n");
  }

  std::cout << "result: "<<easyfind<std::vector<int> >(constIntVector, 1)
    << std::endl;
  return 0;
}

