#ifndef CLAPTRAO_HPP
#define CLAPTRAO_HPP

#include <string>

class ClapTrap {
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string );
		ClapTrap(const ClapTrap& );
		ClapTrap &operator=(const ClapTrap &source);
		~ClapTrap( void );
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
};


#endif // !CLAPTRAO_HPP
