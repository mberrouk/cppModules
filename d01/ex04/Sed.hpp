#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sed{
	std::string s1;
	std::string s2;
	std::ifstream input;
	std::ofstream output;
	std::string filename;

	public:
		Sed( std::string, std::string, std::string );
		void errFileMsg( std::string );
		void parseTransform();
};

#endif	//!SED_HPP
