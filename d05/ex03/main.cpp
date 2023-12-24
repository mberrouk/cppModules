#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>


int main() {
  try {
    {
      Intern someRandomIntern;
      AForm *rrf;
      rrf = someRandomIntern.makeForm("robotomy request", "Bender");
      std::cout << *rrf << std::endl;
      delete rrf;
    }
    std::cout << "-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-"
              << std::endl;
    {
      Intern someRandomIntern;
      AForm *rrf;
      rrf = someRandomIntern.makeForm("shrubbery creation", "test1");
      std::cout << *rrf << std::endl;
      delete rrf;
    }
    std::cout << "-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-"
              << std::endl;
    {
      Intern someRandomIntern;
      AForm *rrf;
      rrf = someRandomIntern.makeForm("presidential pardon", "test2");
      std::cout << *rrf << std::endl;
      delete rrf;
    }
    std::cout << "-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-"
              << std::endl;
    {
      Intern someRandomIntern;
      AForm *rrf;
      rrf = someRandomIntern.makeForm("test", "test3");
      std::cout << *rrf << std::endl;
      delete rrf;
    }
  } catch (std::exception &e) {
    std::cout << "We caught an exception: " << e.what() << std::endl;
  } catch (...) {
    std::cout << "We caught an exception of an undetermined type\n";
  }
  return (0);
}
