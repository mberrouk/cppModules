#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ){
		std::cout << "Default ScavTrap constructor called." << std::endl;
		name = "ScavTrap";
		hitPoints = 100;
		energyPoints = 50;
		attackDamage = 20;
	}

ScavTrap::ScavTrap( std::string name ) {
		std::cout << "Parameterized ScavTrap constructor called." << std::endl;
		this->name = name;
		hitPoints = 100;
		energyPoints = 50;
		attackDamage = 20;
	}

ScavTrap::ScavTrap( const ScavTrap& src) 
	: ClapTrap(src) {
	std::cout << "Copy ScavTrap constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &src ) {
	std::cout << "Copy ScavTrap assignment operator called." << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode."
		<< std::endl;
}
