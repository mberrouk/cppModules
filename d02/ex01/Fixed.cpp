#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
	: fixedPoint(0) {
		std::cout << "Default constructor called" << std::endl;
	}

Fixed::Fixed( const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = num * (1 << fractional);
}

Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(num * (1 << fractional));
}

Fixed& Fixed::operator=( const Fixed &source ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->fixedPoint = source.fixedPoint;
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

float Fixed::toFloat( void ) const {
	return (static_cast<float>(this->fixedPoint) / (1 << this->fractional));
}

int Fixed::toInt( void ) const {
	return fixedPoint / (1 << 8);
}

std::ostream& operator<< (std::ostream& out, const Fixed& obj) {
	out << (static_cast<float>(obj.getRawBits()) / (1 << 8));
	return (out);
}
