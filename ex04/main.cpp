#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char *av[])
{
	std::size_t pos;
	std::string s1, s2, data, outdata;
	std::ifstream inputFile;
	std::ofstream outputFile;

	if (ac != 4)
	{
		std::cout << "Usage: ./SedIsForLosers <filename> <s1 (string)> <s2 (string)> !"
			<< std::endl;
		std::exit(1);
	}
	inputFile.open(av[1]);
	if (!inputFile.is_open())
	{
		std::cout << "Error: Unable to open (" << av[1] << ") file" << std::endl;
		std::exit(2);
	}
	while (std::getline(inputFile, data))
	{
		pos = data.find(av[2]);
		if (pos == data.npos) {
			outdata += data;
			outdata += "\n";
		}
		else {
			if (pos == 0)
				outdata += av[3];
			else
			{
				outdata += data.substr(0, pos);
				std::cout << outdata << std::endl;
			}
		}

		std::cout << data.find(av[2]) << std::endl;
	}
	inputFile.close();
}
