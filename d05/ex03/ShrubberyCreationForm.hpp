#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class ShrubberyCreationForm : public AForm {
  std::string target;

public:
  ShrubberyCreationForm();
  ShrubberyCreationForm( std::string& );
  ShrubberyCreationForm(const ShrubberyCreationForm &);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
  ~ShrubberyCreationForm();
  void execute(Bureaucrat const &executor) const;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
