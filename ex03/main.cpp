#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

int main()
{
	Weapon club = Weapon("crude spiked club");
	std::cout << club.getType() << std::endl;
	club.setType("some other type of club");
	std::cout << club.getType() << std::endl;
	HumanA bob("Bob", club);


	bob.attack();
}
