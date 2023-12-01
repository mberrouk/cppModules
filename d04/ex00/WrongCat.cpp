/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:26:07 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:26:08 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat Default Constructor Called."
		<< std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal() {
	std::cout << "WrongCat Copy Constructor." << std::endl;
	*this = src;
}

WrongCat&  WrongCat::operator=( const WrongCat &src ) {
	std::cout << "WrongCat Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor Called." << std::endl;
}

void WrongCat::makeSound( void ) const {
	std::cout << "Meow! That's the sound of a cat."
		<< std::endl; 
}
