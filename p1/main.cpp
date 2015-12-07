#include "person.h"
#include "variables.h"
#include <QtSql>
using namespace std;
QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
// birgitta path:
//QString dbName = "C:\\Users\\Birgitta\\Documents\\GitHub\\Verknam01_hopur35\\p1\\SQLiteDB\\Verknam01_hopur35.sqlite";
// anna path:
QString dbName = "Verknam01_hopur35.sqlite";
// axel path:
//QString dbName = "C:\\Users\\Axel\\Documents\\Github\\Verknam01_hopur35\\p1\\SQLiteDB\\Verknam01_hopur35.sqlite";
// willard path:
//QString dbName = "";
int main()
{
    db.setDatabaseName(dbName);
    char val = '\0';
    bool db_ok = db.open();
	if(db_ok)
	{
		do{
			startup();
			inputchoice(val);
			startwork(val, db);
		}while(val != EXIT);
	}
	else
		cout << "db.open() returned false" << endl << "Have you changed the path variable 'dbName' in main?" << endl;
	db.close();

    return 0;
}



