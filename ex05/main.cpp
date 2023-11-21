#include "Harl.hpp"

int main () {
	Harl obj;
	std::cout << "Start Testing..." << std::endl;
	std::cout << "\n<****> Valid Arguments <****>" << std::endl;
	obj.complain("INFO");
	obj.complain("DEBUG");
	obj.complain("WARNING");
	obj.complain("ERROR");
	std::cout << "\n<****> Invalid Arguments <****>" << std::endl;
	obj.complain("");
	obj.complain("INFOO");
	obj.complain(" INFO");
	obj.complain("DEBUG ");
	obj.complain("WaRNING");
	obj.complain("ERR0R");
	std::cout << "Testing complete..." << std::endl;
	return (0);
}
