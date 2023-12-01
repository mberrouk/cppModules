/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:26:43 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:26:44 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iomanip>

int main()
{
	std::cout << std::setfill('*') << std::setw(40) << std::left << "\nTEST Start |" << std::endl;

	std::cout << "\n>>> Create i(Cat) & j(Dog) objects:" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << "\n>>> DELETE i & j :" << std::endl;
    delete j;//should not create a leak
    delete i;

	{
		std::cout << "\n>>> Create a Dog and a Dog copy" << std::endl;
		Dog dog;
		Dog copyDog;

		copyDog = dog;
		std::cout << "\n>>> DELETE Dog & copyDog :" << std::endl;
	}

	{
		std::cout << "\n>>> Create a Cat and a Cat copy" << std::endl;
		Cat cat;

		{
			Cat copyCat = cat;

			std::cout << "\n>>> DELETE copyCat :" << std::endl;
		}
		std::cout << "\n>>> DELETE Cat :" << std::endl;
	}

	std::cout << std::setw(40) << std::setfill('*') << "\nTEST an Array of Animal |" << std::endl;

    const Animal* animals[10] = { 
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat() 
	};

	std::cout << std::setw(40) << std::setfill('*') << "\nTEST: Delete Array Elements |" << std::endl;
    for ( int i = 0; i < 10; i++ ) {
		std::cout << "( " << i + 1 << " ) ";
        delete animals[i];
    }

	std::cout << std::setw(40) << std::setfill('*') << "\nTHE TEST HAS ENDED |" << std::endl;

	Dog test;
	Dog test1;
	return (0);
}
