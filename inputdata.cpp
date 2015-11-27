#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "person.h"

using namespace std;

void NumOfSci(int& numOfSci, int& Size);

Person setPerson()
{
    string name, sex;
    int brth, dth;

    cout <<"Name: ";
    cin >> name;

    cout <<"Sex: ";
    cin >> sex;

    cout <<"Year of Birth: ";
    cin >> brth;

    cout <<"Year of Death: ";
    cin >> dth;

    return Person(name, sex, brth, dth);

}


void NumOfSci(int& numOfSt)
{
    cout <<"Number of computer scientist: ";
    cin >> numOfSt;
    cout <<"\n--- Reading scientist ---" << endl;
}


int main()
{
    int numOfSci = 0;
    vector<Person> compScientist;
    ifstream putdata;
    ofstream getdata;

    putdata.open("inputdata.txt", ios::app);
    if(putdata.fail())
    {
        cout << "fail to open file!" << endl;
        exit(1);
    }
    getdata.open("data.txt", ios::app);
    if(getdata.fail())
    {
        cout << "fail to open file!" << endl;
        exit(1);
    }

    NumOfSci(numOfSci);

    for(int i = 0; i<numOfSci; i++)
    {

        compScientist.push_back(setPerson());
        //cout << endl;

    }

    putdata.close();
    getdata.close();

    return 0;
}

