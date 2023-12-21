#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( void )
  : name(""), grade(150) {
    std::cout << "Create Bureaucrat using default constructor." << std::endl;
  }

Bureaucrat::Bureaucrat( const Bureaucrat &src) : name(src.getName()) {
  *this = src;
}

Bureaucrat::Bureaucrat(const std::string& name_arg, int grade_arg)
  : name(name_arg) {
    if (grade_arg < 1)
      throw Bureaucrat::GradeTooHighException(); 
    else if (grade_arg > 150)
      throw Bureaucrat::GradeTooLowException(); 
    grade = grade_arg;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &src ) {
  if (this != &src) {
    this->grade = src.grade;
  }
  return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
  std::cout << "Bureaucrat Destructor Called." << std::endl;
}

const std::string Bureaucrat::getName( void ) const {
  return (this->name);
}

int Bureaucrat::getGrade( void ) const {
  return (this->grade);
}

void Bureaucrat::increment( void ) {
  if (grade <= 1)
    throw Bureaucrat::GradeTooHighException();
  grade--;
}

void Bureaucrat::decrement( void ) {
  if (grade >=  150)
    throw Bureaucrat::GradeTooLowException();
  grade++;

}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& obj) {
  out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
  return (out);
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
  return ("Grade Too Low.");
}
  
const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
  return ("Grade Too High.");
}
