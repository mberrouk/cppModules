#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

int main(int ac, char *av[])
{
	std::size_t pos;
	std::string s1, s2, data, outdata(""), name;
	std::ifstream inputFile;
	std::ofstream outputFile;

	if (ac != 4)
	{
		std::cout << "Usage: ./SedIsForLosers <filename> <s1 (string)> <s2 (string)> !"
			<< std::endl;
		std::exit(1);
	}
	inputFile.open(av[1]);
	s1 = av[2];
	s2 = av[3];
	name = av[1];
	name += ".replace";
	if (!inputFile.is_open())
	{
		std::cout << "Error: Unable to open (" << av[1] << ") file" << std::endl;
		std::exit(2);
	}
	while (std::getline(inputFile, data))
	{
		for (std::size_t i = 0; i < data.length(); i++)
		{
			pos = data.find(av[2], i);
			if (pos != data.npos)
			{
				data.erase(pos, s1.length());
				data.insert(pos, s2);
				i += (s1.length() - 1);
			}
			else {
				break ;
			}
		}
		outdata += data;
		outdata += "\n";
		
	}
	inputFile.close();
	outputFile.open(name);
	if (outputFile.is_open())
	{
		outputFile << outdata;
	}
	else {
		std::cout << "Error: Unable to open (" << name << ") file" << std::endl;
	}
}
