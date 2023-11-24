#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{
	int fixedPoint;
	static const int fractional = 8;

	public:
		Fixed( void );
		Fixed( const Fixed& );
		Fixed& operator=( const Fixed &source );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif // !FIXED_HPP
