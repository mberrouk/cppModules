#include "Sed.hpp"

Sed::Sed(std::string s1, std::string s2, std::string filename)
	: s1(s1), s2(s2), input(filename), output(filename + ".replace"), filename(filename)
	{}

void Sed::errFileMsg( std::string filename )
{
	std::cout << "Error: Unable to open (" << filename << ") file" << std::endl;
	std::exit(1);
}

void Sed::parseTransform()
{
	std::string outdata(""), data("");
	std::size_t pos;

	if (!input.is_open())
		errFileMsg(filename);
	while (std::getline(input, data))
	{
		for (std::size_t i = 0; i < data.length(); i++)
		{
			pos = data.find(s1, i);
			if (pos != data.npos)
			{
				data.erase(pos, s1.length());
				data.insert(pos, s2);
				i += (s1.length() - 1);
			}
			else 
				break ;
		}
		outdata += data;
		outdata += "\n";
	}
	input.close();
	if (!output.is_open())
		errFileMsg(filename + ".replace");
	output << outdata;
	output.close();
}
