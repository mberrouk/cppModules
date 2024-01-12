#include "RPN.hpp"

int main (int argc, char *argv[]) {
	
	try {
		
		if (argc != 2)
			ERROR;

		std::stringstream ss(argv[1]);
		
		RPN(ss);
	
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
