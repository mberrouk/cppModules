#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ) {
	std::cout << "Brain Default Constructor." << std::endl;
}

Brain::Brain( const Brain &src) {
	std::cout << "Brain Copy Constructor." << std::endl;
	*this = src;
}

Brain& Brain::operator=( const Brain &src ) {
	std::cout << "Brain Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain Destructor Called" << std::endl;
}

