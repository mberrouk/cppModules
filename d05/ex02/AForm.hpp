#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class AForm {
  const std::string name;
  bool signe;
  const int grade;
  const int exec_grade;

public:
  AForm();
  AForm(const AForm &);
  AForm(const std::string &, const int, const int);
  AForm &operator=(const AForm &);
  virtual ~AForm();

  const std::string getName(void) const;
  int getGrade(void) const;
  int getExecGrade(void) const;
  bool getSign(void) const;
  void beSigned(Bureaucrat &);
  virtual void execute(Bureaucrat const &executor) const = 0;

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif // !AFORM_HPP
