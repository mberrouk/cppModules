#include "Zombie.hpp"

int main()
{
	Zombie obj;
	obj.announce();

	Zombie *test;
	test = obj.newZombie("newZombie");
	test->announce();

	test->randomChump("from newZombie");
	test->randomChump("from obj");
	return (0);
}
