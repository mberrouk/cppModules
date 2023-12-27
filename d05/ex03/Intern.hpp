/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:24:19 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 16:24:19 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
public:
  Intern();
  Intern(const Intern &);
  Intern &operator=(const Intern &);
  ~Intern();
  AForm *makeForm(std::string, std::string);
};

#endif // !INTERN_HPP
