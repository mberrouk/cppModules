#ifndef  ROBOTOMYREQUESTFORM_HPP
#define  ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
class RobotomyRequestForm : public AForm {
  std::string target;

public:
  RobotomyRequestForm();
  RobotomyRequestForm( std::string& );
  RobotomyRequestForm(const RobotomyRequestForm &);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &);
  ~RobotomyRequestForm();
  void execute(Bureaucrat const &executor) const;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
