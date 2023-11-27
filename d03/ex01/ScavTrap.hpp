#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string );
		ScavTrap( const ScavTrap& );
		ScavTrap& operator=( const ScavTrap &src );
		~ScavTrap( void );
		void guardGate( void );
};

#endif // !SCAVTRAP_HPP
