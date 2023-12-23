#include "AForm.hpp"

AForm::AForm(void)
    : name("default"), signe(false), grade(150), exec_grade(150) {
  std::cout << "AForm Default Constructor Called." << std::endl;
}

// TODO explicitly initialize - grade exec_grade -
AForm::AForm(const AForm &src)
    : name(src.getName()), signe(src.getSign()), grade(src.getGrade()),
      exec_grade(src.getExecGrade()) {}

AForm::AForm(const std::string &nameArg, const int gradeArg,
             const int exec_gradeArg)
    : name(nameArg), signe(false), grade(gradeArg), exec_grade(exec_gradeArg) {
  if (gradeArg < 1 || exec_gradeArg < 1)
    throw AForm::GradeTooHighException();
  else if (gradeArg > 150 || exec_gradeArg > 150)
    throw AForm::GradeTooLowException();
}

// TODO src.signe is a private membre ??
AForm &AForm::operator=(const AForm &src) {
  if (this != &src) {
    this->signe = src.signe;
  }
  return (*this);
}

AForm::~AForm(void) { std::cout << "AForm Destructor Called." << std::endl; }

std::ostream &operator<<(std::ostream &out, const AForm &obj) {
  out << obj.getName() << ", grade " << obj.getGrade() << ", signe "
      << std::boolalpha << obj.getSign() << ", grade to execute "
      << obj.getExecGrade() << ".";
  return (out);
}

const char *AForm::GradeTooLowException::what(void) const throw() {
  return ("Grade Too Low.");
}

const char *AForm::GradeTooHighException::what(void) const throw() {
  return ("Grade Too High.");
}

const std::string AForm::getName(void) const { return (this->name); }

int AForm::getGrade(void) const { return (this->grade); }

int AForm::getExecGrade(void) const { return (this->exec_grade); }

bool AForm::getSign(void) const { return (this->signe); }

void AForm::beSigned(Bureaucrat &obj) {
  if (obj.getGrade() <= grade)
    signe = true;
  else
    throw AForm::GradeTooLowException();
}
