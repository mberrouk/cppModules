#include "Harl.hpp"

int main (int argc, char *argv[]) {
	Harl obj;

	if (argc != 2) {
		std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
		return (1);
	}
	obj.complain(argv[1]);
	return (0);
}
