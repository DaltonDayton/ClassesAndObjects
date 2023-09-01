#include "Tweeter.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
  Person p1("Dalton", "Dayton", 123);
  {
    Tweeter t1("Someone", "Else", 456, "@whoever");
    string name2 = t1.getName();
  }
  cout << "after innermost block" << endl;
  string name = p1.getName();

  // int i = p1.arbitraryNumber;

  return 0;
}
