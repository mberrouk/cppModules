/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:25:20 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 16:25:20 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
    : AForm("RobotomyRequestForm", 72, 45) {
  *this = src;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
  if (this != &src) {
    this->target = src.target;
  }
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm Destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string &arg)
    : AForm("RobotomyRequestForm", 72, 45), target(arg) {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  static int flag;

  flag++;
  srand(time(0) + flag);
  if (this->getSign() && (this->getExecGrade() >= executor.getGrade())) {
    if (rand() % 2)
      std::cout << "Drilling... " << target
                << " has been robotomized successfully 50\% of the time."
                << std::endl;
    else
      std::cout << "robotomy failed." << std::endl;
  } else {
    throw GradeTooLowException();
  }
}
