/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:01:49 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/27 22:57:52 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (!this->hitPoints) {
		std::cout << "FragTrap " << name << " can't do anything!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name << " HIGH FIVES!" << std::endl;
}
