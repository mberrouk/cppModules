#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
	: fixedPoint(0) {
		std::cout << "Default constructor called" << std::endl;
	}

Fixed::Fixed( const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=( const Fixed &source ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->fixedPoint = source.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}
