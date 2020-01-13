#include <iostream>
#include "Elephant.h"
#include <memory>

int main() {
  std::cout << "Hello, World!" << std::endl;

  Elephant::Ptr elephant = std::make_shared<Elephant>(100,1);

  elephant->Name = "dollianna";

  return 0;
}
