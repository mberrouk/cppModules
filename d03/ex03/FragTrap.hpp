#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( const FragTrap& );
		FragTrap( std::string );
		FragTrap& operator=( const FragTrap& );
		~FragTrap( void );
		void highFivesGuys(void);
};

#endif // !FRAGTRAP_HPP
