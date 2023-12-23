#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <cstdlib>


PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 72, 45), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &src)
    : AForm("PresidentialPardonForm", 72, 45) {
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
    : AForm("PresidentialPardonForm", 72, 45), target(arg) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (this->getSign() && (this->getExecGrade() >= executor.getGrade())) {
    srand(time(NULL));
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
