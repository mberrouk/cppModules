#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>

#define ERROR throw std::runtime_error("Error: Invalid parameters!")

typedef std::string string;

void evaluate(std::stack<float> &, string );
void RPN(std::istream &);

#endif// RPN_HPP