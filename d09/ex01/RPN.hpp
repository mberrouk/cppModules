#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>

typedef std::string string;

#define ERROR throw std::runtime_error("Error: Invalid parameters!")

void evaluate(std::stack<float> &, string );
void RPN(std::istream &);

#endif// RPN_HPP