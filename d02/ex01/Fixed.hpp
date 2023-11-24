#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	int fixedPoint;
	static const int fractional = 8;

	public:
		Fixed( void );
		Fixed( const Fixed& );
		Fixed( const int );
		Fixed( const float );
		Fixed& operator=( const Fixed &source );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& obj);

#endif // !FIXED_HPP
