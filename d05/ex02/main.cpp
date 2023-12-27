/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:23:25 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 17:37:03 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  try {
    std::cout << "[Test I]\t- Expect No Exception and generate a "
                 "default_shrubbery file..."
              << std::endl;
    ShrubberyCreationForm test;
    Bureaucrat tt("None", 18);
    test.beSigned(tt);
    test.execute(tt);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "\n[Test II]\t- Expect No Exception." << std::endl;
    RobotomyRequestForm test;
    Bureaucrat tt("None", 18);
    test.beSigned(tt);
    test.execute(tt);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "\n[Test III]\t- Expect No Exception." << std::endl;
    PresidentialPardonForm test;
    Bureaucrat tt("None", 1);
    test.beSigned(tt);
    test.execute(tt);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  {
    std::cout << "\n[Exceptions tests]:\n" << std::endl;
    std::cout << "-> ShrubberyCreationForm:\n" << std::endl;
    try {
      ShrubberyCreationForm test;
      Bureaucrat tt("None", 188);
      test.beSigned(tt);
      test.execute(tt);
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }

    std::cout << "-> RobotomyRequestForm:\n" << std::endl;
    try {
      RobotomyRequestForm test;
      Bureaucrat tt("None", 50);
      test.beSigned(tt);
      test.execute(tt);
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }

    std::cout << "-> PresidentialPardonForm:\n" << std::endl;
    try {
      PresidentialPardonForm test;
      Bureaucrat tt("None", 6);
      test.beSigned(tt);
      test.execute(tt);
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "\n\n{Test RobotomyRequestForm::execute}\t - Ensure that a "
               "different "
               "seed is used for the random number generator each time.\n"
            << "-> RobotomyRequestForm:\n"
            << std::endl;
  try {
    RobotomyRequestForm test;
    Bureaucrat tt("None", 2);
    test.beSigned(tt);
    test.execute(tt);
    test.execute(tt);
    test.execute(tt);
    test.execute(tt);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return (0);
}
