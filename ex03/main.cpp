#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::setfill('*') << std::setw(60) << "\n\n";
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << '\n' <<  std::setfill('*') << std::setw(60) << "\n\n";
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << '\n' << std::setfill('*') << std::setw(60) << "\n";
}
