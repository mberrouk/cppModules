/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:24:15 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 17:47:27 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &) {}

Intern &Intern::operator=(const Intern &) { return (*this); }

Intern::~Intern() {}

int check_formName(std::string &formName) {
  int i;
  std::string forms[] = {"robotomy request", "shrubbery creation",
                         "presidential pardon"};

  for (i = 0; i < 3; i++)
    if (forms[i] == formName)
      return (i);
  return (i);
}

AForm *Intern::makeForm(std::string formName, std::string targetName) {
  switch (check_formName(formName)) {
  case 0:
    std::cout << "Intern creates RobotomyRequestForm" << std::endl;
    return new RobotomyRequestForm(targetName);
  case 1:
    std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
    return new ShrubberyCreationForm(targetName);
  case 2:
    std::cout << "Intern creates PresidentialPardonForm" << std::endl;
    return new PresidentialPardonForm(targetName);
  default:
    throw std::runtime_error("Form Name Thas Not Exists!");
  }
}
