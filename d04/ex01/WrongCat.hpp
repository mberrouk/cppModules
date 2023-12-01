/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:27:02 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:27:03 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat & );
		WrongCat& operator=( const WrongCat & );
		~WrongCat( void );
		void makeSound( void ) const ;
};

#endif // !WRONGCAT_HPP

