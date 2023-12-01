/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:27:30 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:27:31 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain *brainIdeas;

	public:
		Dog( void );
		Dog( const Dog & );
		Dog& operator=( const Dog & );
		~Dog( void );
		void makeSound( void ) const;
};

#endif // !DOG_HPP
