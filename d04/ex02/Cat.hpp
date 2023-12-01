/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:27:21 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:27:22 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	protected:
		Brain *brainIdeas;

	public:
		Cat( void );
		Cat( const Cat & );
		Cat& operator=( const Cat & );
		~Cat( void );
		void makeSound( void ) const ;
};

#endif // !CAT_HPP
