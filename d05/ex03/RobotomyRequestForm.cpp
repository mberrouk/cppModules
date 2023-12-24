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
  if (this->getSign() && (this->getExecGrade() >= executor.getGrade()))
    std::cout << target << " "
              << "has been pardoned by Zaphod Beeblebrox." << std::endl;
  else
    throw GradeTooLowException();
}
