#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iomanip>

int main() {
  try {
    std::cout << "[TEST I] \n\t-The ongoing test ensures proper object "
                 "instantiation by utilizing"
              << " a valid input as the constructor argument.\n\n**START "
                 "TESTING**\n\n\t";
    Bureaucrat test("test", 10);
    std::cout << "-> INFO OF (" << test.getName() << ") Bureaucrat:\n"
              << test << std::endl;
    std::cout << "\n\t-> Increment grade for (" << test.getName()
              << "):" << std::endl;
    test.increment();
    std::cout << "\n\t-> INFO OF (" << test.getName() << "):\n"
              << test << std::endl;
    std::cout << "\n\tCreate Form: -- testForm(\"testForm\", 10, 25) -- "
              << std::endl;
    Form testForm("testForm", 10, 25);
    std::cout << "\n\t-> INFO OF (" << testForm.getName() << "):\n\t"
              << testForm << std::endl;

    std::cout << "\n\t--> Use signForm():" << std::endl << "=> \t";
    test.signForm(testForm);
    std::cout << "\t-> INFO OF (" << testForm.getName() << "):\n\t" << testForm
              << std::endl;
    std::cout << "\n**[TEST I HAS REACHED ITS CONCLUSION]**" << std::endl;
    std::cout << std::setw(60) << std::setfill('~') << "\n" << std::endl;
    std::cout << "\n[TEST II]\n\t-Prepare for an exception:"
              << "This test case is expected to trigger an "
                 "exception.\n\n**START TESTING**\n\n";
    std::cout << "\n\tCreate Form: -- testForm(\"testForm2\", 1, 1) -- "
              << std::endl;
    Form testForm2("testForm2", 1, 1);
    std::cout << "\n\t--> Use signForm():" << std::endl << "=> \t";
    test.signForm(testForm2);
    std::cout << "\t-> INFO OF (" << testForm2.getName() << "):\n\t"
              << testForm2 << std::endl;
    std::cout << "\n\t--> Use beSigned():" << std::endl;
    testForm2.beSigned(test);
  } catch (std::exception &exception) {
    std::cout << "-=-(in catch)=-> An exception occured (" << exception.what()
              << ")" << std::endl;
  }
  std::cout << "\n**[TEST II HAS REACHED ITS CONCLUSION]**" << std::endl;
  std::cout << std::setw(60) << std::setfill('~') << "\n" << std::endl;
  return (0);
}
