#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
	std::string name;
	Weapon weapon;

	public:
		HumanA( std::string , Weapon );
		void attack( void );
};

#endif // !HUMAN_HPP
