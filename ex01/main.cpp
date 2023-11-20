#include "Zombie.hpp"

int main () {

	int N = 13;
	str name = "NAME";

	std::cout << "***** Try: allocate (" << N << ") object(s) *****" << std::endl;
	Zombie *ptr = zombieHorde(N, name);
	if (!ptr)
	{
		std::cout << "\t<!> Error to allocate (" << N << ") object(s) <!>" << std::endl;
		return (1);
	}
	std::cout << "\t** Allocation success! Efficiently allocated in ("<< N << ") instances! **" << std::endl;
	std::cout << "\n***** Announce " << N << " objects *****" << std::endl;
	for (int i = 0; i < N; i++) {
		std::cout << i + 1 << " ";
		(ptr + i)->announce();
	}
	std::cout << "\n***** Distract all *****" << std::endl;
	delete[] ptr;
	std::cout << "\n<======Process completed successfully!======>" << std::endl;
	return (0);
}
