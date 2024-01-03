#include "Array.hpp"

int main () {
	Array<int> test(10);
	for (int i(0); i <10; i++) {
		std::cout << test[i];
	}

	std::cout << test[0] << std::endl;
	test[0] = 100;
	std::cout << test[0] << std::endl;
	test[1] = 15;
	std::cout << test[0] << "   " << test[1] << std::endl;

	Array<std::string> test1(10);
	for (int i(0); i <10; i++) {
		std::cout << test1[i];
	}

	std::cout << test1[0] << std::endl;
	test1[0] = "hello";
	std::cout << test1[0] << std::endl;
	test1[1] = "world";
	std::cout << test1[0] << "   " << test1[1] << std::endl;
	return 0;
}
