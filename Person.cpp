#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, int arbitrary)
    : firstname(first), lastname(last), arbitraryNumber(arbitrary)
{
  cout << "constructing " << firstname << " " << lastname << endl;
}

Person::Person() : arbitraryNumber(0)
{
  cout << "constructing " << firstname << " " << lastname << endl;
}

Person::~Person()
{
  cout << "destructing " << firstname << " " << lastname << endl;
}

std::string Person::getName()
{
  return firstname + " " + lastname;
}
