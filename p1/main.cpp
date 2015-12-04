#include "person.h"
#include "variables.h"
#include <QtSql>
using namespace std;
QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
// birgitta path:
QString dbName = "C:\\Users\\Birgitta\\Documents\\GitHub\\Verknam01_hopur35\\p1\\SQLiteDB\\Verknam01_hopur35.sqlite";
// anna path:
//QString dbName = "";
// axel path:
//QString dbName = "";
// willard path:
//QString dbName = "";
int main()
{
	db.setDatabaseName(dbName);
    int numOfSci = 0, numOfCom = 0;
    //outputscie(compScientist);
    char val = '\0';
	bool db_ok = db.open();
	if(db_ok)
	{
		do{
			startup();
			inputchoice(val);
			startwork(val, numOfSci, numOfCom, db);
		}while(val != EXIT);
	}
	else
		cout << "db.open() returned false" << endl << "Have you changed the path variable 'dbName' in main?" << endl;
	db.close();

    return 0;
}



