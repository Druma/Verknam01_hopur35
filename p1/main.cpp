#include "person.h"
#include "variables.h"
#include <QtSql>
using namespace std;
QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
QString dbName = "/SQLiteDB/Verknam01_hopur35.sqlite";
int main()
{
	db.setDatabaseName(dbName);
    int numOfSci = 0, numOfCom = 0;
    //outputscie(compScientist);
    char val = '\0';
	db.open();
    do{
        startup();
        inputchoice(val);
        startwork(val, numOfSci, numOfCom, db);
    }while(val != EXIT);
	db.close();

    return 0;
}



