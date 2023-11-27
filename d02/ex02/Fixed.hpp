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
		Fixed operator= ( const Fixed &source );
		bool operator> ( const Fixed &obj );
		bool operator< ( const Fixed &obj );
		bool operator>= ( const Fixed &obj );
		bool operator<= ( const Fixed &obj );
		bool operator== ( const Fixed &obj );
		bool operator!= ( const Fixed &obj );
		Fixed operator+ ( const Fixed &obj );
		Fixed operator- ( const Fixed &obj );
		Fixed operator* ( const Fixed &obj );
		Fixed operator/ ( const Fixed &obj );
		Fixed &operator++ ( void );
		Fixed operator++ ( int );
		Fixed &operator-- ( void );
		Fixed operator-- ( int );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<< (std::ostream& out, const Fixed& obj);

#endif // !FIXED_HPP
