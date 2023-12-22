#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>


class Bureaucrat {
  private:
    const std::string name;
    int grade;
  public:
    Bureaucrat();
    Bureaucrat(const std::string&, int );
    Bureaucrat( const Bureaucrat& );
    Bureaucrat& operator=(const Bureaucrat& );
    ~Bureaucrat();
    const std::string getName() const;
    int getGrade() const ;
    void increment();
    void decrement();

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw();

    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& obj);

#endif // !BUREAUCRAT_HPP