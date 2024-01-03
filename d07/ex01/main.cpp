#include "iter.hpp"
#include <iostream>

template <typename T>
void fo(T &elem) {
	elem += 66;
}

int main () {
	int arr[10] = {};

	std::cout << "--> ";
	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;
	iter<int>(arr, 10, fo);
	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;
	
	std::string test[10] = {
		"A", "A", "A",
		"A", "A", "A",
		"A", "A", "A",
		"A"
	};
	for (int i = 0 ; i < 10 ; i++)
		std::cout << test[i] << " " ;
	std::cout << std::endl;

	std::cout << "--> ";
	iter<std::string>(test, 10, fo);
	for (int i = 0 ; i < 10 ; i++)
		std::cout << test[i] << " " ;
	std::cout << std::endl;

	return 0;
}
