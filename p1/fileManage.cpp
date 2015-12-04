#include "person.h"
#include "variables.h"
#include <cstdlib>

QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
QString dbName = "/SQLiteDB/Verknam01_hopur35.sqlite";
// helper function
void NumOfSci(int& numOfSt)
{
    cout <<"Number of computer scientist: ";

	numOfSt = inputIntC();

	if(numOfSt != 0)
		cout <<"\n--- Reading scientist ---" << endl;
}

void NumOfComp(int& numOfCom)
{
    cout <<"Number of computers: ";

    numOfCom = inputIntC();

    if(numOfCom != 0)
        cout <<"\n--- Reading computers ---" << endl;
}

// update person
void inputscie(int& numOfSci)
{

    QString full_info = "";
    QString inputPers = "INSERT INTO Person (name, sex, year_birth, year_death) VALUES ";
    QSqlQuery query(db);

    NumOfSci(numOfSci);
    for(int i = 0; i < numOfSci; i++){
        Person Sci = setPerson();
        full_info.append("(");
        full_info.append( QString::fromStdString(Sci.getnm()));
        full_info.append(", ");
        full_info.append( QString::fromStdString(Sci.getsx()));
        full_info.append(", ");
        full_info.append( QString::number(Sci.getbrth()));
        full_info.append(", ");
        full_info.append( QString::number(Sci.getdth()));
        full_info.append(")");
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
    QString full_info = "";
    QString inputComp = "INSERT INTO Person (name, year_creation, type, was_built) VALUES ";
    QSqlQuery query(db);

    NumOfComp(numOfCom);
    for(int i = 0; i < numOfCom; i++){
        Computer Com = setComputer();
        full_info.append("(");
        full_info.append( QString::fromStdString(Com.getnm()));
        full_info.append(", ");
        full_info.append( QString::number(Com.getyc()));
        full_info.append(", ");
        full_info.append( QString::fromStdString(Com.gettp()));
        full_info.append(", ");
        full_info.append( QString::number(Com.getwc()));
        full_info.append(")");
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

// output scientist
/*void outputscie(vector<Person>& newPerson, bool prnt)
{
    splitData(newPerson);
	if(prnt)
		printVect(newPerson);
}

void outputComp(){

}
*/
