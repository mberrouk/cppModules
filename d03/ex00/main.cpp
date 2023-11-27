#include "ClapTrap.hpp"

int main () {
	ClapTrap a("Player-I");
	ClapTrap b("Player-II");

	/** "5 energy points were spent for both a and b." **/
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");

	/** no energy points are spent. **/
	a.takeDamage(6);
	b.takeDamage(1);

	/** 5 energy points were spent for b. **/
	b.attack("Player-I");
	b.attack("Player-I");
	b.attack("Player-I");
	b.attack("Player-I");
	b.attack("Player-I");

	/** a be repaired (new hit-point 10) energy spent**/
	a.beRepaired(700);

	/** b can't do anything, all energy point spent**/
	b.attack("Player-I");

	/** 4 energy points were spent for b. **/
	a.attack("Player-II");
	a.attack("Player-II");
	a.attack("Player-II");
	a.attack("Player-II");

	/** a & b can't do anything, all energy point spent**/
	a.beRepaired(700);
	b.beRepaired(700);

	return (0);
}
