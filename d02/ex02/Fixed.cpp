#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
	: fixedPoint(0) {}

Fixed::Fixed( const Fixed& src) {
	*this = src;
}

Fixed::Fixed( const int num ) {
	this->fixedPoint = num * (1 << fractional);
}

Fixed::Fixed( const float num ) {
	this->fixedPoint = roundf(num * (1 << fractional));
}

Fixed& Fixed::operator=( const Fixed &source ) {
	if (this != &source)
		this->fixedPoint = source.fixedPoint;
	return (*this);
}

Fixed::~Fixed( void ) {}

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

bool Fixed::operator> ( const Fixed &obj ) {
	return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator< ( const Fixed &obj ) {
	return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>= ( const Fixed &obj ) {
	return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<= ( const Fixed &obj ) {
	return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator== ( const Fixed &obj ) {
	return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!= ( const Fixed &obj ) {
	return (this->getRawBits() != obj.getRawBits());
}

Fixed Fixed::operator+ ( const Fixed &obj ) {
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator- ( const Fixed &obj ) {
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator* ( const Fixed &obj ) {
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/ ( const Fixed &obj ) {
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++ ( void ) {
	this->fixedPoint += 1;
	return (*this);
}

Fixed Fixed::operator++ ( int ) {
	Fixed postInc( *this );
	this->fixedPoint += 1;
	return (postInc);
}

Fixed& Fixed::operator-- ( void ) {
	this->fixedPoint += 1;
	return (*this);
}

Fixed Fixed::operator-- ( int ) {
	Fixed postDec(*this);
	this->fixedPoint -= 1;
	return (postDec);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

