#include "person.h"
#include "variables.h"
#include <cstdlib>
#include <fstream>
//
// helper function
void NumOfSci(int& numOfSt)
{
    cout <<"Number of computer scientist: ";
    cin >> numOfSt;
    cout <<"\n--- Reading scientist ---" << endl;
}

// input scientist
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
//splits data in file and push into a new vector
void splitData(vector<Person>& newPerson)
{
	newPerson.clear();
    ifstream getdata;
    getdata.open("data.txt");
    vector<string> newdata;
    string next;
    while(getdata >> next)
    {
        split(next, ';', newdata);
    }

    for(unsigned int i = 0; i < newdata.size(); i = i + 4)
    {
        newPerson.push_back(Person(newdata[i], newdata[i+1], atoi(newdata[i+2].c_str()), atoi(newdata[i+3].c_str())));
    }
    getdata.close();
}

// output scientist
void outputscie(vector<Person>& newPerson, bool prnt)
{
    splitData(newPerson);
	if(prnt)
		printVect(newPerson);
}
