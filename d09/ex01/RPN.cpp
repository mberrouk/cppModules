#include "RPN.hpp"

void evaluate(std::stack<float> &sta, string opcode) {

	float operandy = sta.top();
	sta.pop();
	float operandx = sta.top();
	sta.pop();

	if (opcode == "+")
		operandx += operandy;
	else if (opcode == "-")
		operandx -= operandy;
    else if (opcode == "*")
		operandx *= operandy;
    else if (opcode == "/" && operandy == 0) {ERROR;}
    else
		operandx /= operandy;
    
    sta.push(operandx);
}

void RPN(std::istream &ss) {
	
	float operand;
	string opcode("+-/*");
    std::stack<float> operandStack;
    std::istream_iterator<string> sIt(ss);

	for ( ; sIt != std::istream_iterator<string>(); ++sIt) {

        if ((*sIt).find_first_not_of("+-/*0123456789.") != string::npos)
			ERROR;

		if (opcode.find(*sIt) != std::string::npos) {
			if (operandStack.size() < 2)
				ERROR;
			evaluate(operandStack, *sIt);
			continue;
		}
		
        operand = std::atof((*sIt).c_str());
		if (operand >= 10)
			ERROR;
	
		operandStack.push(operand);
	}

	if (operandStack.empty() || operandStack.size() > 1)
		ERROR;
	else 
		std::cout << operandStack.top() << std::endl;
}