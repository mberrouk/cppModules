#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL) {}

void HumanB::attack( void )
{
	if (!this->weapon)
		std::cout << name << " is not armed!" << std::endl;
	else
		 std::cout << name << " attacks with their " << this->weapon->getType()
		 << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}
