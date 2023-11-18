#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Foo") {}

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

Zombie* Zombie::newZombie( std::string name ) 
{
	Zombie *newobj;

	newobj = new Zombie;
	newobj->setName(name);
	return (newobj);
}

void Zombie::randomChump( std::string name )
{
	Zombie zombie;

	zombie.setName(name);
	zombie.announce();
}
