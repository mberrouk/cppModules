/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:23:30 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 18:08:48 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &src)
    : AForm("PresidentialPardonForm", 25, 5) {
  *this = src;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
  if (this != &src) {
    this->target = src.target;
  }
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm Destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string &arg)
    : AForm("PresidentialPardonForm", 25, 5), target(arg) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (this->getSign() && (this->getExecGrade() >= executor.getGrade()))
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
  else
    throw GradeTooLowException();
}
