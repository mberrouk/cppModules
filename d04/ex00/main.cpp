/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:25:34 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:25:35 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iomanip>

int main()
{
	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nTEST Animal Start |" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nGET TYPE |" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nTEST MAKESOUND |" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nUSING VIRTUAL DESTRUCTOR |" << std::endl;
	std::cout << "\n>> Delete Dog:\n" << std::endl;
	delete j;
	std::cout << "\n>> Delete Cat:\n" << std::endl;
	delete i;
	std::cout << "\n>> Delete Animal:\n" << std::endl;
	delete meta;
	std::cout << std::setw(40) << std::setfill('*') << "THE TEST HAS ENDED |" << std::endl;



	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nTEST WrongAnimal Start |" << std::endl;
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nGET TYPE |" << std::endl;
	std::cout << Wrongmeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nTEST MAKESOUND |" << std::endl;
	wrongCat->makeSound(); //will output the cat sound!
	Wrongmeta->makeSound();
	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nUSING VIRTUAL DESTRUCTOR |" << std::endl;
	std::cout << "\n>> Delete WrongCat:\n" << std::endl;
	delete wrongCat;
	std::cout << "\n>> Delete WrongAnimal:\n" << std::endl;
	delete Wrongmeta;
	std::cout << std::setw(40) << std::setfill('*') << "THE TEST HAS ENDED |" << std::endl;
	return 0;
}
