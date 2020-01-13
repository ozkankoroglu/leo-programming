#include "Elephant.h"
#include <iostream>

Elephant::Elephant(float weight, int age) :
  weight_(weight),
  age_(age) {

}

float Elephant::CalculateHappiness() {
  happiness_ = (1.0f / (float) age_) * 4;

  std::cout << "Happiness: " << happiness_ << std::endl;

  return happiness_;
}

// Prevents copying
// Not allowing modification

void Elephant::GiveSorrow(const float &amount_sorrow) {
  happiness_ -= amount_sorrow;
//  amount_sorrow += 7;
  std::cout << "Happiness: " << happiness_ << std::endl;

}
