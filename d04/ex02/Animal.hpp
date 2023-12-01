/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:27:08 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:27:09 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal( void );
		Animal( const Animal & );
		Animal &operator=(const Animal &);
		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
		virtual ~Animal( void );

	protected:
		std::string type;
};

#endif // !ANIMAL_HPP
