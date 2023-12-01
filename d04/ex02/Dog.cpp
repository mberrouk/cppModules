#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor Called."
		<< std::endl;
	type = "Dog";
	brainIdeas = new Brain();
}

Dog::Dog( const Dog &src ) : Animal() {
	std::cout << "Dog Copy Constructor." << std::endl;
	brainIdeas = NULL;
	*this = src;
}

Dog&  Dog::operator=( const Dog &src ) {
	std::cout << "Dog Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		if (brainIdeas)
			delete brainIdeas;
		this->type = src.type;
		this->brainIdeas = new Brain( *src.brainIdeas );
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor Called." << std::endl;
	delete brainIdeas;
}

void Dog::makeSound( void ) const {
	std::cout << "You can hear the dog barking: woof!"
		<< std::endl; 
}
