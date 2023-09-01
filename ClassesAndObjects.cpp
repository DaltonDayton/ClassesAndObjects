#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
  Person p1("Dalton", "Dayton", 123);
  {
    Person p2;
  }
  cout << "after innermost block" << endl;
  string name = p1.getName();

  // int i = p1.arbitraryNumber;

  return 0;
}
