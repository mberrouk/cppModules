/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:27:05 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:29:27 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Undefined") {
	std::cout << "Animal Default Constructor." << std::endl;
}

Animal::Animal( const Animal &src) {
	std::cout << "Animal Copy Constructor." << std::endl;
	*this = src;
}

Animal& Animal::operator=( const Animal &src ) {
	std::cout << "Animal Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType( void ) const {
	return (type);
}

void Animal::makeSound( void ) const {
	std::cout << "Animal sound." << std::endl;
}
