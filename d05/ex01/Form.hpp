/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:23:06 by mberrouk          #+#    #+#             */
/*   Updated: 2023/12/27 16:23:06 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
  const std::string name;
  bool signe;
  const int grade;
  const int exec_grade;

public:
  Form();
  Form(const Form &);
  Form(const std::string &, const int, const int);
  Form &operator=(const Form &);
  ~Form();

  const std::string getName(void) const;
  int getGrade(void) const;
  int getExecGrade(void) const;
  bool getSign(void) const;
  void beSigned(Bureaucrat &);

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif // !FORM_HPP
