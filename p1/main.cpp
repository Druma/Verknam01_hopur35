#include "PerCom.h"
#include "variables.h"
#include <QtSql>
using namespace std;

QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
QString dbName = "SQL_hopur35.sqlite";
int main()
{
    db.setDatabaseName(dbName);
    char* val = '\0';
    bool db_ok = db.open();
    bool end = true;
    if(db_ok)
    {
        do{
            startup();
            val = inputchoice();
            if(strlen(val) == 1){
                if(val[0] == EXIT){
                    end = false;
                }
                else{
                    startwork(val[0], db);
                    end = true;
                }
            }
            else{
                cout << "Error " << endl;
                end = true;
            }
        }while(end);
    }
    else
        cout << "db.open() returned false"                              << endl
             << "Have you changed the path variable 'dbName' in main?"  << endl;
    db.close();

    return 0;
}
