#include "variables.h"
#include "person.h"
#include <limits>
#include <iomanip>

Person::Person(string nm, string sx, int brth, int dth)
{
    name = nm;
    sex = sx;
    year_birth = brth;
    year_death = dth;
}

string Person::getname()
 {
     return name;
 }

string Person::getsex()
 {
     return sex;
 }

int Person::getbirth()
 {
     return year_birth;
 }

int Person::getdeath()
 {
     return year_death;
 }

Person setPerson()
{
    string name, sex;
    int brth, dth;

    legalPerson(name, sex, brth, dth);

    return Person(name, sex, brth, dth);
}


