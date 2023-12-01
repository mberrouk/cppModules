#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal( void );
		Animal( const Animal & );
		Animal &operator=(const Animal &);
		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
		virtual ~Animal( void );

	protected:
		std::string type;
};

#endif // !ANIMAL_HPP
