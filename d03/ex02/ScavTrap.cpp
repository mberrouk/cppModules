/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:01:37 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/27 22:56:31 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (!this->hitPoints) {
		std::cout << "ScavTrap " << name << " can't do anything!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode."
		<< std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	if (!this->hitPoints || !this->energyPoints) {
		std::cout << "ScavTrap " << name << " can't do anything!" << std::endl;
		return ;
	}
	else if (this->name == target) {
		std::cout << "ScavTrap " << name << " can't attack himself" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target
		<< " causing " << attackDamage << " points of damage!" << std::endl;
}
