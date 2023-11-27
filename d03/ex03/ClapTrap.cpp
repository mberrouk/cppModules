#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void )
	: name(""), hitPoints(10), energyPoints(10), attackDamage(0) {
		std::cout << "Default constructor called" << std::endl;
	}

ClapTrap::ClapTrap( std::string name )
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
		std::cout << "Parameterized constructor called" << std::endl;
	}

ClapTrap::ClapTrap( const ClapTrap& srcObj ) {
	std::cout << "Copy constructor called." << std::endl;
	*this = srcObj;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &src ) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
	if (!this->hitPoints || !this->energyPoints) {
		std::cout << "ClapTrap " << name << " can't do anything!" << std::endl;
		return ;
	}
	else if (this->name == target) {
		std::cout << "ClapTrap " << name << " can't attack himself!" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target
		<< " causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (amount >= this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " take "
		<< amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount) {
	if (!this->energyPoints || !this->hitPoints) {
		std::cout << "ClapTrap " << name << " can't do anything!" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	if (this->hitPoints + amount > 10)
		this->hitPoints = 10;
	else
		this->hitPoints += amount;
	std::cout << "ClapTrap " << name << " has repaired and now has a new"
		<< " hit point amount of (" << this->hitPoints << ")." << std::endl;
}
