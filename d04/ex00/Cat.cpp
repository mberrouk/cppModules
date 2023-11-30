#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor Called."
		<< std::endl;
	type = "Cat";
}

Cat::Cat( const Cat &src ) : Animal() {
	std::cout << "Cat Copy Constructor." << std::endl;
	*this = src;
}

Cat&  Cat::operator=( const Cat &src ) {
	std::cout << "Cat Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor Called." << std::endl;
}

void Cat::makeSound( void ) const {
	std::cout << "Meow! That's the sound of a cat."
		<< std::endl; 
}
