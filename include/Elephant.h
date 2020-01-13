#ifndef LEO_PROGRAMMING_ELEPHANT_H
#define LEO_PROGRAMMING_ELEPHANT_H

#include <string>
#include <memory>

class Elephant {
public:
  using Ptr = std::shared_ptr<Elephant>;
  Elephant(float weight, int age);

public:
  std::string Name;

  float CalculateHappiness();

  void GiveSorrow(const float &amount_sorrow);

private:
  float weight_;
  int age_;
  float happiness_;

};


#endif //LEO_PROGRAMMING_ELEPHANT_H
