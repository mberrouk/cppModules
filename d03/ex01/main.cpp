/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:01:29 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/27 22:40:57 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main () {
	ScavTrap x;
	ScavTrap test("Player-I");
	ScavTrap test1(test);
	
	std::cout << "\n*************************************************"
		<< std::endl;
	
	test.guardGate();
	test.attack("Player-I");
	test1.guardGate();
	test.attack("Player-II");
	test.takeDamage(100);
	
	std::cout << "\n*************************************************"
		<< std::endl;
}
