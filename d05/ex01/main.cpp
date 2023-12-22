#include "Form.hpp"
#include <cstring>

int main() {
  /****************************** TEST I ************************************/
  // try {
    std::cout << "[TEST I] \n\t-The ongoing test ensures proper object instantiation by utilizing"
      << " a valid input as the constructor argument.\n\n**START TESTING**\n\n";
    char *str = new char[10];
    strcpy(str, "hello");
    Form test(str, 1, 1);
    std::cout <<  "-> INFO OF (" << test.getName() << "):\n" << test << std::endl;
    std::cout <<  "\t-> INFO OF (" << test.getName() << "):\n\t" << test << std::endl;
    std::cout << "\n**[TEST I HAS REACHED ITS CONCLUSION]**" << std::endl;
    /****************************** TEST II ***********************************/

  //   std::cout << "\n[TEST II]\n\t-Prepare for an exception:"
  //     << "This test case is expected to trigger an exception.\n\n**START TESTING**\n\n";
  //   Bureaucrat test1("test1", 0);
  // }
  // catch (std::exception& exception) {
  //   std::cout << "An exception occured (" << exception.what() << ")" << std::endl;
  // }
  // std::cout << "\n**[TEST II HAS REACHED ITS CONCLUSION]**" << std::endl;
  // /****************************** TEST III ***********************************/
  //
  // try {
  //   std::cout << "\n[TEST III]\n\t-Prepare for an exception:"
  //     << "This test case is expected to trigger an exception.\n\n**START TESTING**\n\n";
  //   Bureaucrat test2("test2", 150);
  //   std::cout <<  "-> INFO OF (" << test2.getName() << "):\n" << test2 << std::endl;
  //   std::cout << "-> Decrement grade for (" << test2.getName() << "):" << std::endl;
  //   test2.decrement();
  //   std::cout <<  "-> INFO OF (" << test2.getName() << "):\n" << test2 << std::endl;
  //
  // }
  // catch (std::exception& exception) {
  //   std::cout << "An exception occured (" << exception.what() << ")" << std::endl;
  // }
  // std::cout << "\n**[TEST III HAS REACHED ITS CONCLUSION]**" << std::endl;
  // /****************************** TEST IV ***********************************/
  // 
  // try {
  //   std::cout << "\n[TEST IV]\n\t-Prepare for an exception:"
  //     << "This test case is expected to trigger an exception.\n\n**START TESTING**\n\n";
  //   Bureaucrat test3("test3", 1);
  //   std::cout <<  "-> INFO OF (" << test3.getName() << "):\n" << test3 << std::endl;
  //   std::cout << "-> Increment grade for (" << test3.getName() << "):" << std::endl;
  //   test3.increment();
  //   std::cout <<  "-> INFO OF (" << test3.getName() << "):\n" << test3 << std::endl;
  // }
  // catch (std::exception& exception) {
  //   std::cout << "An exception occured (" << exception.what() << ")" << std::endl;
  // }
  // std::cout << "\n**[TEST IV HAS REACHED ITS CONCLUSION]**" << std::endl;

  return (0);
}
