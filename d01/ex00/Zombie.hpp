#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

typedef std::string str;

class Zombie {
	str name;

	public:
		Zombie();
		void announce( void );
		Zombie* newZombie( std::string name );
		void setName( str );
		void randomChump( std::string name );
		~Zombie();
};

#endif // !ZOMBIE_HPP
