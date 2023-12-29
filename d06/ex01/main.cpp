#include "Serializer.hpp"
#include <iostream>

int main() {
  Data test;

  test.x = 13;
  test.y = -37;

  uintptr_t serializedPtr = Serializer::serialize(&test);
  std::cout << "-> Serialize pointer value ↴\n - " << serializedPtr
            << std::endl;

  std::cout << "-> Deserialize pointer value ↴" << std::endl;
  Data *deserializePtr = Serializer::deserialize(serializedPtr);
  std::cout << " - " << deserializePtr << std::endl;
  if (deserializePtr)
    std::cout << " - x: " << deserializePtr->x
              << "\n - y: " << deserializePtr->y << std::endl;
  return (0);
}
