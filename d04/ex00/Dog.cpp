/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:25:25 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:25:26 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor Called."
		<< std::endl;
	type = "Dog";
}

Dog::Dog( const Dog &src ) : Animal() {
	std::cout << "Dog Copy Constructor." << std::endl;
	*this = src;
}

Dog&  Dog::operator=( const Dog &src ) {
	std::cout << "Dog Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor Called." << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << "You can hear the dog barking: woof!"
		<< std::endl; 
}
