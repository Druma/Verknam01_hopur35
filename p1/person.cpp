#include "person.h"
#include <iostream>
#include <limits>

const int maxYear = 9999;
const int minimumYear = 100;
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

 //Checks if users input data is legal or not
 void legalPerson(string& name, string& sex, int& brth, int& dth)
 {
    bool err = false;
    string ans;
    brth = 0;

    cout <<"Name: ";
    cin.ignore();
    getline(cin, name);

    do{
        cout <<"Gender - female/male: ";
        cin >> sex;
        if(sex == "female" || sex == "male" || sex == "f" || sex == "m" || sex == "F" || sex == "M"){
            err = false;
        }
        else{
            err = true;
            cout << "Error, please try again" << endl;
        }
    }while(err);

    do{
        cout <<"Year of Birth: ";
        cin >> brth;
        if(brth <= maxYear && brth >= minimumYear){
            err = false;
        }
        else{
            if(!(cin >> brth)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Error, please input a number between 100 and 9999" << endl;
            err = true;
        }    
    }while(err);

    cout <<"Is the person still alive? y/n: ";
    cin >> ans;
    if(ans == "n" || ans == "N" || ans == "no" || ans == "NO" || ans == "No")
    {
        cout << "Year of Death: ";
        cin >> dth;
    }
    else
        dth = '\0';
 }

 Person setPerson()
{
    string name, sex;
    int brth, dth;

    legalPerson(name, sex, brth, dth);

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
