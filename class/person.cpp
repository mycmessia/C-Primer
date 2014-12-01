#include <iostream>
#include "person.h"

Person::Person(const std::string &ln, const char *fn)
{
	lname = ln;
	strncpy(fname, fn, LIMIT - 1); 
}

void Person::Show() const
{
	std::cout << "Show " << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << "FormalShow " << lname << " " << fname << std::endl;
}
