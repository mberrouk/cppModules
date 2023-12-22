 #include "Form.hpp"

Form::Form( void )
  : name("default"), signe(false), grade(150), exec_grade(150) {
    std::cout << "Form Default Constructor Called." << std::endl; 
  }

//TODO explicitly initialize - grade exec_grade -   
Form::Form( const Form& src )
  : name(src.getName()), signe(src.getSign()), grade(src.getGrade()), exec_grade(src.getExecGrade()) {
}

Form::Form(const std::string& nameArg, const int gradeArg, const int exec_gradeArg)
  : name(nameArg), signe(false), grade(gradeArg), exec_grade(exec_gradeArg) {
    if (gradeArg < 1 || exec_gradeArg < 1)
      throw Form::GradeTooHighException(); 
    else if (gradeArg > 150 || exec_gradeArg > 150)
      throw Form::GradeTooLowException(); 
}

//TODO src.signe is a private membre ??  
Form& Form::operator=( const Form &src ) {
  if (this != &src) {
    this->signe = src.signe;
  }
  return (*this);
}

Form::~Form( void ) {
  std::cout << "Form Destructor Called." << std::endl;
}

std::ostream &operator<<( std::ostream &out, const Form& obj ) {
  out << obj.getName() << ", grade " << obj.getGrade() << ", signe "
    << obj.getSign() << ", grade to execute " << obj.getExecGrade()
    << ".";
  return (out);
}

const char* Form::GradeTooLowException::what( void ) const throw() {
  return ("Grade Too Low.");
}
  
const char* Form::GradeTooHighException::what( void ) const throw() {
  return ("Grade Too High.");
}

const std::string Form::getName( void ) const {
  return (this->name);
}

int Form::getGrade( void ) const {
  return (this->grade);
}

int Form::getExecGrade( void ) const {
  return (this->exec_grade);
}

bool Form::getSign( void ) const {
  return (this->signe);
}