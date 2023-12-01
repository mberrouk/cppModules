#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor Called."
		<< std::endl;
	type = "Cat";
	brainIdeas = new Brain();
}

Cat::Cat( const Cat &src ) : Animal() {
	std::cout << "Cat Copy Constructor." << std::endl;
	brainIdeas = NULL;
	*this = src;
}

Cat&  Cat::operator=( const Cat &src ) {
	std::cout << "Cat Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		if (brainIdeas)
			delete brainIdeas;
		this->type = src.type;
		brainIdeas = new Brain( *src.brainIdeas );
	}
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor Called." << std::endl;
	delete brainIdeas;
}

void Cat::makeSound( void ) const {
	std::cout << "Meow! That's the sound of a cat."
		<< std::endl; 
}
