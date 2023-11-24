#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ) 
{
	Zombie *newobj;

	newobj = new Zombie;
	newobj->setName(name);
	return (newobj);
}
