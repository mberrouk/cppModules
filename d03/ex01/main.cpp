#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main () {
	ScavTrap x;
	ScavTrap test("Player-I");
	ScavTrap test1(test);
	
	std::cout << "\n*************************************************"
		<< std::endl;
	test.guardGate();
	test.attack("Player-I");
	test1.guardGate();
	test.attack("Player-II");
	test.takeDamage(100);
	std::cout << "\n*************************************************"
		<< std::endl;
}
