#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("Undefined") {
	std::cout << "WrongAnimal Default Constructor." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src) {
	std::cout << "WrongAnimal Copy Constructor." << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src ) {
	std::cout << "WrongAnimal Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (type);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound." << std::endl;
}
