#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	protected:
		Brain *brainIdeas;

	public:
		Cat( void );
		Cat( const Cat & );
		Cat& operator=( const Cat & );
		~Cat( void );
		void makeSound( void ) const ;
};

#endif // !CAT_HPP
