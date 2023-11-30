#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain *brainIdeas;

	public:
		Dog( void );
		Dog( const Dog & );
		Dog& operator=( const Dog & );
		~Dog( void );
		void makeSound( void ) const;
};

#endif // !DOG_HPP
