#include "identify.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void) {
  static int flag;

  flag++;
  srand(time(0) + flag);
  switch (rand() % 3) {
  case 0:
    // std::cout << "A\n";
    return new A();
  case 1:
    // std::cout << "B\n";
    return new B();
  case 2:
    // std::cout << "C\n";
    return new C();
  default:
    // std::cout << "default\n";
    return new C();
  }
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "C" << std::endl;
  else
    std::cout << "Unknown Type" << std::endl;
}

void identify(Base &p) {
  try {
    dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
  } catch (std::exception &) {
    try {
      dynamic_cast<B &>(p);
      std::cout << "B" << std::endl;
    } catch (std::exception &) {
      try {
        dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
      } catch (std::exception &) {
        std::cout << "Unknown Type" << std::endl;
      }
    }
  }
}
