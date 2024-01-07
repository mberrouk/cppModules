#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <stdexcept>

template <typename T> int easyfind(const T &container, int first_occur) {

  typename T::const_iterator it;

  it = std::find(container.begin(), container.end(), first_occur);
  if (it == container.end())
	  throw std::runtime_error("No Occurrence Is Found.\n");

	return (*it);
}

#endif
