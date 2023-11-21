#include "Sed.hpp"

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Usage: ./SedIsForLosers <filename> <s1 (string)> <s2 (string)> !"
			<< std::endl;
		std::exit(1);
	}
	Sed sed(av[2], av[3], av[1]);
	sed.parseTransform();
}
