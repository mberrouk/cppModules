#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
	std::string name;
	Weapon* weapon;

	public:
		HumanB( std::string );
		void attack( void );
		void setWeapon( Weapon& );

};

#endif // !HUMANB_HPP
