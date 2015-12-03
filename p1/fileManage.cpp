#include "person.h"
#include "variables.h"
#include <cstdlib>

// helper function
void NumOfSci(int& numOfSt)
{
    cout <<"Number of computer scientist: ";

	numOfSt = inputIntC();

	if(numOfSt != 0)
		cout <<"\n--- Reading scientist ---" << endl;
}

void NumOfComp(int& numOfSt)
{
    cout <<"Number of computers: ";

    numOfSt = inputIntC();

    if(numOfSt != 0)
        cout <<"\n--- Reading computers ---" << endl;
}

// update person READY
void inputscie(int& numOfSci)
{
    Qstring full_info = "";
    Qstring inputPers = "INSERT INTO Person (name, sex, year_birth, year_death) VALUES ";
    QSqlQuery query(db);

    NumOfSci(numOfSci);
    for(int i = 0; i < numOfSci; i++){
        Person Sci = setPerson();
        full_info += "(" + Sci.getnm() + ", " + Sci.getsx() + ", " + Sci.getbrth() + ", " + Sci.getdth() + ")";
        if(i == numOfSci){
            full_info += ";";
        }
        else
            full_info += ",";
    }
    bool prepared = query.prepare(inputPers + full_info);
    if(prepared){
        query.exec();
    }
    else
        cout << query.lastError().text().toStdString() << endl; //report error

}
//update computer
void inputComp(int& numOfCom)
{
    Qstring full_info = "";
    Qstring inputComp = "INSERT INTO Person (name, year_creation, type, was_built) VALUES ";
    QSqlQuery query(db);

    NumOfComp(numOfCom);
    for(int i = 0; i < numOfCom; i++){
        //Person Sci = setPerson();
        full_info += "(" + Com.getnm() + ", " + Com.getyc() + ", " + Com.gettp() + ", " + Com.getwb() + ")";
        if(i == numOfCom){
            full_info += ";";
        }
        else
            full_info += ",";
    }
    bool prepared = query.prepare(inputComp + full_info);
    if(prepared){
        query.exec();
    }
    else
        cout << query.lastError().text().toStdString() << endl; //report error

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
