#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Foo") {}

Zombie::Zombie( str objName )
{
	name = objName;
}

Zombie::~Zombie(void)
{
	std::cout << name << " Zombie destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(str newName)
{
	name = newName;
}
