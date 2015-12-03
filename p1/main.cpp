#include "person.h"
#include "variables.h"
#include <QtSql>
using namespace std;

int main()
{
	

	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	QString dbName = "C:\\Users\\Birgitta\\Documents\\GitHub\\Verknam01_hopur35\\p1\\SQLiteDB\\Verknam01_hopur35.sqlite";
	//QString dbName = "/SQLiteDB/Verknam01_hopur35.sqlite";
	db.setDatabaseName(dbName);

	bool db_ok = db.open();
	if(db_ok){
		QSqlQuery query(db);
		//query.exec("SELECT * FROM Computer");
		query.exec("SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID;");
		if(query.lastError().isValid())
			cout << query.lastError().text().toStdString() << endl;
		else
		{
			cout << "Person, Computer, Year" << endl;
			cout << "----------------------" << endl;
			while(query.next())
			{
				//cout << query.value("name").toString().toStdString() << endl;
				cout << query.value("Person").toString().toStdString() << " | " << query.value("Computer").toString().toStdString() << " | " << query.value("Year").toString().toStdString() << endl;
			}
		}
	}
	else
		cout << "db.open() returned false" << endl;
	

	/*
    int numOfSci = 0;
    vector<Person> compScientist;
	outputscie(compScientist);
    char val = '\0';
    do{
        startup();
        inputchoice(val);
        startwork(val, numOfSci, compScientist);
    }while(val != EXIT);
	*/

    return 0;
}



