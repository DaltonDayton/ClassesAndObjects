#include "Person.h"
#include <iostream>

int main()
{
  Person p1("Dalton", "Dayton", 123);
  {
    Person p2;
  }
  std::cout << "after innermost block" << std::endl;
  std::string name = p1.getName();

  // int i = p1.arbitraryNumber;

  return 0;
}
