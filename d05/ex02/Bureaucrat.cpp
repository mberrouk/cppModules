/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:23:21 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 16:23:21 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <algorithm>
#include <exception>

Bureaucrat::Bureaucrat(void) : name(""), grade(150) {
  // std::cout << "Create Bureaucrat using default constructor." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.getName()) {
  *this = src;
}

Bureaucrat::Bureaucrat(const std::string &name_arg, int grade_arg)
    : name(name_arg) {
  if (grade_arg < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade_arg > 150)
    throw Bureaucrat::GradeTooLowException();
  grade = grade_arg;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
  if (this != &src) {
    this->grade = src.grade;
  }
  return (*this);
}

Bureaucrat::~Bureaucrat(void) {
  std::cout << "Bureaucrat Destructor Called." << std::endl;
}

const std::string Bureaucrat::getName(void) const { return (this->name); }

int Bureaucrat::getGrade(void) const { return (this->grade); }

void Bureaucrat::increment(void) {
  if (grade <= 1)
    throw Bureaucrat::GradeTooHighException();
  grade--;
}

void Bureaucrat::decrement(void) {
  if (grade >= 150)
    throw Bureaucrat::GradeTooLowException();
  grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {
  out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
  return (out);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
  return ("Grade Too Low.");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
  return ("Grade Too High.");
}

void Bureaucrat::signForm(AForm &obj) {
  try {
    obj.beSigned(*this);
    std::cout << this->getName() << " signed " << obj.getName() << "."
              << std::endl;
  } catch (std::exception &e) {
    std::cout << this->getName() << " couldn't sign " << obj.getName()
              << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(AForm const &form) {
  try {
    form.execute(*this);
    std::cout << getName() << " executed " << form.getName() << std::endl;
  } catch (std::exception &e) {
    std::cout << getName() << " couldn't execute because " << e.what()
              << std::endl;
  }
}
