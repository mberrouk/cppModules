#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon( std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType( void )
{
	return type;
}

void Weapon::setType( std::string type )
{
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "<!> " << this->getType() << " Destroyed <!>" << std::endl;
}
