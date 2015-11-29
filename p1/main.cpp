#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "person.h"
#include "variables.h"

using namespace std;

Person setPerson()
{
    string name, sex;
    int brth, dth;

    cout <<"Name: ";
    cin.ignore();
    getline(cin, name);

    cout <<"Sex: ";
    cin >> sex;

    cout <<"Year of Birth: ";
    cin >> brth;

    cout <<"Year of Death: ";
    cin >> dth;

    return Person(name, sex, brth, dth);
}

int main()
{
    int numOfSci = 0;
    vector<Person> compScientist;
    char val;
    do{
        startup();
        inputchoice(val);
        startwork(val, numOfSci, compScientist);
    }while(val != '4');

    return 0;
}

void startup() {
    cout << "Please select one of the following: " << endl;
    cout << "---------------------------------- " << endl;
    cout << "[1] Input a person/s into the list" << endl;
    cout << "[2] Output the whole list" << endl;
    cout << "[3] Search for a person in the list" << endl;
    cout << "[4] Exit the program" << endl;
}

void inputchoice(char& val) {
    cin >> val;
}

void NumOfSci(int& numOfSt)
{
    cout <<"Number of computer scientist: ";
    cin >> numOfSt;
    cout <<"\n--- Reading scientist ---" << endl;
}

void inputscie(int& numOfSci, vector<Person>& compScientist)
{
    ofstream getdata;

    NumOfSci(numOfSci);

    for(int i = 0; i < numOfSci; i++)
    {
        compScientist.push_back(setPerson());
        cout << endl;
    }

    getdata.open("data.txt", ios::app);
    if(getdata.fail())
    {
        cout << "fail to open file!" << endl;
        exit(1);
    }
    for(int i = 0; i < numOfSci; i++)
    {
         getdata << compScientist[i].getnm() << ";";
         getdata << compScientist[i].getsx() << ";";
         getdata << compScientist[i].getbrth() << ";";
         getdata << compScientist[i].getdth() << endl;
    }
    getdata.close();

}

void printPer(Person per)
{
    cout << "Name: " << per.getnm() << endl;
    cout << "Sex: " << per.getsx() << endl;
    cout << "Year of birth: " << per.getbrth() << endl;
    cout << "Year of death: " << per.getdth() << endl;
}

void printVect(vector<Person> vect)
{
    for(unsigned int i = 0; i < vect.size(); i++)
    {
        printPer(vect[i]);
    }
}


void split(const string& next, char c, vector<string>& newdata) {
   string::size_type i = 0;
   string::size_type j = next.find(c);

   while (j != string::npos) {
      newdata.push_back(next.substr(i, j-i));
      i = ++j;
      j = next.find(c, j);

      if (j == string::npos)
         newdata.push_back(next.substr(i, next.length()));
   }
}

void outputscie(vector<Person>& newPerson)
{
    ifstream getdata;
    getdata.open("data.txt");
    vector<string> newdata;
    string next;
    while(getdata >> next){
        split(next, ';', newdata);
    }

    for(unsigned int i = 0; i < newdata.size(); i = i + 4)
    {
        newPerson.push_back(Person(newdata[i], newdata[i+1], atoi(newdata[i+2].c_str()), atoi(newdata[i+3].c_str())));
    }
    printVect(newPerson);
    getdata.close();
}

void startwork(char val, int numOfSci, vector<Person>& compScientist) {

        switch(val) {
            case '1' :
                inputscie(numOfSci, compScientist);
                break;
            case '2' :
                outputscie(compScientist);
                break;
            case '3' :
                sort_name(compScientist);
                printVect(compScientist);
                sort_name(compScientist, true);
                printVect(compScientist);
                break;
            case '4' :
                break;
            default :
                cout << "Please input a valid option" << endl;
                //inputchoice(val);
                //startwork(val);
    }
}