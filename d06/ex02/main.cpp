#include "identify.hpp"
#include <iostream>

int main() {
	Base *bb = generate();
	Base *b = generate();
	Base *a = generate();
	Base *bbb = generate();
	Base *c = generate();
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	identify(bb);
	identify(b);
	identify(a);
	identify(bbb);
	identify(c);
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	identify(*bb);
	identify(*b);
	identify(*a);
	identify(*bbb);
	identify(*c);
	delete bb;
	delete b;
	delete a;
	delete bbb;
	delete c;

	return (0);
}
