#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat Default Constructor Called."
		<< std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal() {
	std::cout << "WrongCat Copy Constructor." << std::endl;
	*this = src;
}

WrongCat&  WrongCat::operator=( const WrongCat &src ) {
	std::cout << "WrongCat Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor Called." << std::endl;
}

void WrongCat::makeSound( void ) const {
	std::cout << "Meow! That's the sound of a cat."
		<< std::endl; 
}
