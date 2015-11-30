#include "person.h"
#include <iostream>
//
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

 Person setPerson()
{
    string name, sex;
    int brth, dth;

    cout <<"Name: ";
    cin.ignore();
    getline(cin, name);

    cout <<"Gender: ";
    cin >> sex;

    cout <<"Year of Birth: ";
    cin >> brth;

    cout <<"Year of Death: ";
    cin >> dth;

    return Person(name, sex, brth, dth);
}

void printPer(Person per)
{
    cout << "Name: " << per.getnm() << endl;
    cout << "Gender: " << per.getsx() << endl;
    cout << "Year of birth: " << per.getbrth() << endl;
    cout << "Year of death: " << per.getdth() << endl;
    cout << endl;
}
