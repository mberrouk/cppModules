#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
class PresidentialPardonForm : public AForm {
  std::string target;

public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string &);
  PresidentialPardonForm(const PresidentialPardonForm &);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &);
  ~PresidentialPardonForm();
  void execute(Bureaucrat const &executor) const;
};

#endif // !PRESIDENTIALPARDONFORM_HPP
