/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:01:41 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/27 22:56:52 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string );
		ScavTrap( const ScavTrap& );
		ScavTrap& operator=( const ScavTrap &src );
		~ScavTrap( void );
		void guardGate( void );
		void attack( const std::string& target );
};

#endif // !SCAVTRAP_HPP
