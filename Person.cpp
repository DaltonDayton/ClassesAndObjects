#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary)
    : firstname(first), lastname(last), arbitraryNumber(arbitrary)
{
  std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::Person() : arbitraryNumber(0)
{
  std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::~Person()
{
  std::cout << "destructing " << firstname << " " << lastname << std::endl;
}

std::string Person::getName()
{
  return firstname + " " + lastname;
}
