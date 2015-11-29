#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "person.h"

using namespace std;

void startup();
void inputchoice(char& val);
void startwork(char val, int numOfSci, vector<Person>& compScientist);
void NumOfSci(int& numOfSci);
void inputscie(int& numOfSci, vector<Person>& compScientist);
void outputscie(int numOfSci, vector<Person> compScientist);

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

    startup();
    inputchoice(val);
    startwork(val, numOfSci, compScientist);

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

void outputscie(int numOfSci, vector<Person> compScientist)
{
    ofstream getdata;
    getdata.open("data.txt");
    cout << "hello" << endl;
    cout << numOfSci << endl;
    //REYNA AD LESA UT UR DATA FILE!!!
    string next;
    while(getdata << next){
        cout << "Name: " ;
        cout << "Sex: " /*<<*/ /*KYN*/;
        cout << "Year of birth: " /*<<*/ /*BIRTH*/ ;
        cout << "Year of death: " /*<<*/ /*DEATH*/ << endl;
    }
    getdata.close();
}


void startwork(char val, int numOfSci, vector<Person>& compScientist) {

        switch(val) {
            case '1' :
                inputscie(numOfSci, compScientist);
                break;
            case '2' :
                outputscie(numOfSci, compScientist);
                break;
//          case '3' :
//          fsearch();
//              break;
            case '4' :
                break;
            default :
                cout << "Please input a valid option" << endl;
                //inputchoice(val);
                //startwork(val);
    }
}
