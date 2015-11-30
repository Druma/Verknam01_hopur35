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
     char ans;

    string name, sex;
    int brth, dth;

    cout <<"Name: ";
    cin.ignore();
    getline(cin, name);

    cout <<"Gender - female/male: ";
    cin >> sex;

    cout <<"Year of Birth: ";
    cin >> brth;

    cout <<"Is the person still alive? y/n: "<< endl;
    cin >> ans;
    if(ans == 'n' || ans == 'N')
    {
        cout << "Year of Death: ";
        cin >> dth;
    }
    else
        dth = '\0';

    return Person(name, sex, brth, dth);
}

void printPer(Person per)
{
    cout << "Name: " << per.getnm() << endl;
    cout << "Gender: " << per.getsx() << endl;
    cout << "Year of birth: " << per.getbrth() << endl;
    if(per.getdth() != '\0')
    {
        cout << "Year of death: " << per.getdth() << endl;
    }
    cout << endl;
}
