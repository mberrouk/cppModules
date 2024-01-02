#include <iostream>
#include "Array.hpp"

int main (int argc, char *argv[]) {
	int * a = new int();
	std::cout << *a << std::endl;
	Array<int> test(15);
	// std::cout << test << std::endl;

	return 0;
}
