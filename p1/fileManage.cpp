#include "person.h"
#include "variables.h"
#include <cstdlib>
#include <fstream>

// helper function
void NumOfSci(int& numOfSt)
{
    cout <<"Number of computer scientist: ";

    //cout << " " << numOfSt << " ";
	numOfSt = inputIntC();
    //cout << numOfSt << endl;
	if(numOfSt != 0)
		cout <<"\n--- Reading scientist ---" << endl;
}

// input scientist
void inputscie(int& numOfSci, vector<Person>& compScientist)
{
    ofstream getdata;

    NumOfSci(numOfSci);
	unsigned int temp = compScientist.size();

    for(int i = 0; i < numOfSci; i++)
    {
        compScientist.push_back(setPerson());
        cout << endl;
    }

    getdata.open(DATAFILE.c_str(), ios::app);
    if(getdata.fail())
    {
        cout << "fail to open file!" << endl;
        exit(1);
    }
    for(int i = 0; i < numOfSci; i++)
    {
         getdata << compScientist[temp+i].getnm() << ";";
         getdata << compScientist[temp+i].getsx() << ";";
         getdata << compScientist[temp+i].getbrth() << ";";
         getdata << compScientist[temp+i].getdth() << endl;
    }
    getdata.close();

}

//splits data in file and push into a new vector
void splitData(vector<Person>& newPerson)
{
	newPerson.clear();
    ifstream getdata;
    getdata.open(DATAFILE.c_str());
    vector<string> newdata;
    string next;
	string temp_name = "";
    while(getdata >> next)
    {
		if(next.find(';') != string::npos)
		{
			temp_name+=next;
			split(temp_name, ';', newdata);
			temp_name = "";
		}
		else
			temp_name+=next+" ";
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
