#include "iter.hpp"
#include <iostream>

template <typename T>
void fo(T &arg) {
	arg = 1;
}

int main () {
	int arr[10] = {};

	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;
	iter(arr, 10, fo<int>);
	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;
	return 0;
}
