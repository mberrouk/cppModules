/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:01:53 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/27 22:43:06 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main () {
	FragTrap x;
	FragTrap player("Player-I");
	FragTrap player1("Player-II");

	player.attack("Player-II");
	player1.attack("Player-II");
	player.highFivesGuys();
	return (0);
}
