#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

typedef std::string str;

class Zombie {
	str name;

	public:
		Zombie();
		Zombie( str );
		void setName(str newName);
		void announce( void );
		~Zombie();
};

Zombie*	zombieHorde( int N, std::string name );

#endif // !ZOMBIE_HPP
