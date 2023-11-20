#include "Zombie.hpp"

int main()
{
	Zombie obj;
	obj.announce();

	Zombie *test;
	test = obj.newZombie("NNULL");
	test->announce();

	test->randomChump("from newZombie");
	test->randomChump("from obj");
	delete test;
	return (0);
}
