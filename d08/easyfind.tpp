#include <iostream>

template <typename T> int easyfind(T container, int first_occur) {
  typename T::const_iterator it;

  it = container.begin();
  std::cout << *it << std::endl;
  return (*it);
}
