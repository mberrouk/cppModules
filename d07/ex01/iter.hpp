#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
template <typename T, typename U>
void iter(T arr, size_t size, U fun) {
  if (!arr || !fun)
    return;
  for (size_t i = 0; i < size; i++)
    fun(arr[i]);
}

#endif // !ITER_HPP
