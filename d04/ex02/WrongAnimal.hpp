/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:28:01 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:28:02 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & );
		WrongAnimal &operator=(const WrongAnimal &);
		std::string getType( void ) const;
		void makeSound( void ) const;
		virtual ~WrongAnimal( void );

	protected:
		std::string type;
};

#endif // !WRONGANIMAL_HPP
