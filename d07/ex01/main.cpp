/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:45:30 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/03 19:52:35 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void fo(T &elem) {
	elem += 66;
}

int main () {
	int arr[10] = {};

	std::cout << "--> ";
	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;
	iter<int, void(*)(int&)>(arr, 10, fo);
	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;
	
	std::string test[10] = {
		"A", "A", "A",
		"A", "A", "A",
		"A", "A", "A",
		"A"
	};
	for (int i = 0 ; i < 10 ; i++)
		std::cout << test[i] << " " ;
	std::cout << std::endl;

	std::cout << "--> ";
	iter<std::string, void(*)(std::string&)>(test, 10, fo);
	for (int i = 0 ; i < 10 ; i++)
		std::cout << test[i] << " " ;
	std::cout << std::endl;

	return 0;
}
