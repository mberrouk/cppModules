/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:01:18 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/27 22:48:37 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main () {
	ClapTrap x;
	ClapTrap a("Player-I");
	ClapTrap b("Player-II");

	/** "5 energy points were spent for both a and b." **/
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");
	a.attack("Player-II");
	b.attack("Player-I");

	/** no energy points are spent. **/
	a.takeDamage(6);
	b.takeDamage(1);

	/** 5 energy points were spent for b. **/
	b.attack("Player-I");
	b.attack("Player-I");
	b.attack("Player-I");
	b.attack("Player-I");
	b.attack("Player-I");

	/** a be repaired (new hit-point 704) energy spent**/
	a.beRepaired(700);

	/** b can't do anything, all energy point spent**/
	b.attack("Player-I");

	/** 4 energy points were spent for b. **/
	a.attack("Player-II");
	a.attack("Player-II");
	a.attack("Player-II");
	a.attack("Player-II");

	/** a & b can't do anything, all energy point spent**/
	a.beRepaired(700);
	b.beRepaired(700);

	return (0);
}
