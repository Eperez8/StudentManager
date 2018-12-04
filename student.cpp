#include "student.h"
#include <iostream>
#include <string>

void student::setName(string firstName,string lastName)
{
    first = firstName;
    last = lastName;
}

string student::fullName()
{
    string name = first;
    name.append(" ");
    name.append(last);
    return name;
}
