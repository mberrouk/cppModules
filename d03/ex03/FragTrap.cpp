#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ){
		std::cout << "Default FragTrap constructor called." << std::endl;
		name = "FragTrap";
		hitPoints = 100;
		energyPoints = 100;
		attackDamage = 30;
	}

FragTrap::FragTrap( std::string name ) {
		std::cout << "Parameterized FragTrap constructor called." << std::endl;
		this->name = name;
		hitPoints = 100;
		energyPoints = 100;
		attackDamage = 30;
	}

FragTrap::FragTrap( const FragTrap& src) 
	: ClapTrap(src) {
	std::cout << "Copy FragTrap constructor called." << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap &src ) {
	std::cout << "Copy FragTrap assignment operator called." << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << name << "HIGH FIVES!" << std::endl;
}
