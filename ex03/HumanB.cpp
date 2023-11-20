#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon("default") {}

void HumanB::attack( void )
{
	if (this->weapon.getType() == "default")
		std::cout << name << " is not armed!" << std::endl;
	else
		 std::cout << name << "attacks with their " << this->weapon.getType()
		 << std::endl;
}
