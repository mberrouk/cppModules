#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor Called."
		<< std::endl;
	type = "Dog";
}

Dog::Dog( const Dog &src ) : Animal() {
	std::cout << "Dog Copy Constructor." << std::endl;
	*this = src;
}

Dog&  Dog::operator=( const Dog &src ) {
	std::cout << "Dog Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor Called." << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << "You can hear the dog barking: woof!"
		<< std::endl; 
}
