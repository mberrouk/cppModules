#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & );
		WrongAnimal &operator=(const WrongAnimal &);
		std::string getType( void ) const;
		void makeSound( void ) const;
		virtual ~WrongAnimal( void );

	protected:
		std::string type;
};

#endif // !WRONGANIMAL_HPP
