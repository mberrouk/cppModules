#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
	std::string type;

	public:
		Weapon( std::string );
		const std::string& getType( void );
		void setType( std::string );

};

#endif  //WEAPON_HPP
