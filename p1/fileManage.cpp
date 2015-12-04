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

void NumOfComp(int& numOfCom)
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
//update computer READY
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
// basic output function
void output()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "C:\\Users\\LINDA HA\\Desktop\\codes\\Verknam01_hopur35\\p1\\SQLiteDB\\Verknam01_hopur35.sqlite";
	//QString dbName = "/SQLiteDB/Verknam01_hopur35.sqlite";
	db.setDatabaseName(dbName);

	bool db_ok = db.open();
	if(db_ok){
		QSqlQuery query(db);
		//query.exec("SELECT * FROM Computer");
		QString text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID;";
		QString text_person = "SELECT name, sex, year_birth AS 'birth', year_death AS 'death' FROM Person;";
		QString text_computer = "SELECT name, year_creation AS 'creation', was_built AS 'built', type FROM Computer;";
		
		query.exec(text_connection);
		if(query.lastError().isValid())
			cout << query.lastError().text().toStdString() << endl;
		else
		{
			if(undefined_temp = "Connection")
			{
				// text_connection
				cout << "Person, Computer, Year" << endl;
				cout << "----------------------" << endl;
				while(query.next())
				{
					cout << query.value("Person").toString().toStdString() << " | " << query.value("Computer").toString().toStdString() << " | " << query.value("Year").toString().toStdString() << endl;
				}
			} else if(undefined_temp = "Person")
			{
				// text_person
				cout << "Name, Sex, Year of Birth, Year of Death" << endl;
				cout << "----------------------" << endl;
				while(query.next())
				{
					cout << query.value("name").toString().toStdString() << " | " << query.value("sex").toString().toStdString() << " | " << query.value("birth").toString().toStdString()  << " | " << query.value("death").toString().toStdString() << endl;
				}
			} else if(undefined_temp = "computer")
			{
				// text_computer
				cout << "Name, Creation Time, Type, Was Built(?)" << endl;
				cout << "----------------------" << endl;
				while(query.next())
				{
					cout << query.value("name").toString().toStdString() << " | " << query.value("creation").toString().toStdString() << " | " << query.value("type").toString().toStdString()  << " | ";
					if(query.value("death").toString().toStdString() == "0")
						cout << "No" << endl;
					else
						cout << "Yes"<< endl;
				}
			}
		}
	}
	else
		cout << "db.open() returned false" << endl;
	
}