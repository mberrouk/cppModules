/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:26:26 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/01 16:26:27 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	protected:
		std::string ideas[100];

	public:
		Brain( void );
		Brain( const Brain & );
		Brain& operator=( const Brain & );
		~Brain( void );
};

#endif // !BRAIN_HPP
