#include "person.h"

Person::Person(string nm, string sx, int brth, int dth)
{
    name = nm;
    sex = sx;
    year_birth = brth;
    year_death = dth;
}
 string Person::getnm()
 {
     return name;
 }

 string Person::getsx()
 {
     return sex;
 }

 int Person::getbrth()
 {
     return year_birth;
 }

 int Person::getdth()
 {
     return year_death;
 }
