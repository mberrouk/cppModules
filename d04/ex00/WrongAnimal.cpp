/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:26:02 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:26:03 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("Undefined") {
	std::cout << "WrongAnimal Default Constructor." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src) {
	std::cout << "WrongAnimal Copy Constructor." << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src ) {
	std::cout << "WrongAnimal Copy Assignment operator." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (type);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound." << std::endl;
}
