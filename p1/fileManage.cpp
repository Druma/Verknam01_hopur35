#include "person.h"
#include "variables.h"
#include <cstdlib>
#include <iomanip>

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
void inputscie(int& numOfSci, QSqlDatabase& db)
{
    bool db_ok = db.open();
    if(db_ok)
    {
        QString full_info = "";
        QString inputPers = "INSERT INTO Person (name, sex, year_birth, year_death) VALUES ";
        QSqlQuery query(db);

        NumOfSci(numOfSci);
        for(int i = 0; i < numOfSci; i++){
            Person Sci = setPerson();
            full_info.append("(\"");
            full_info.append( QString::fromStdString(Sci.getnm()));
            full_info.append("\", \"");
            full_info.append( QString::fromStdString(Sci.getsx()));
            full_info.append("\", ");
            full_info.append( QString::number(Sci.getbrth()));
            full_info.append(", ");
            full_info.append( QString::number(Sci.getdth()));
            full_info.append(")");
            if(i >= numOfSci-1){
                full_info.append(";");
            }
            else
                full_info.append(", ");
        }
        inputPers.append(full_info);
        //cout << endl << inputPers.toStdString() << endl;
        bool prepared = query.prepare(inputPers);
        if(prepared){
            query.exec();
        }
        else
            cout << query.lastError().text().toStdString() << endl; //report error
    }
    else
        cout << "db.open() returned false" << endl;
    db.close();

}
//update computer
void inputComp(int& numOfCom, QSqlDatabase& db)
{
    bool db_ok = db.open();
    if(db_ok)
    {
        QString full_info = "";
        QString inputComp = "INSERT INTO Computer (name, year_creation, type, was_built) VALUES ";
        QSqlQuery query(db);

        NumOfComp(numOfCom);
        for(int i = 0; i < numOfCom; i++){
            Computer Com = setComputer();
            full_info.append("(\"");
            full_info.append( QString::fromStdString(Com.getnm()));
            full_info.append("\", ");
            full_info.append( QString::number(Com.getyc()));
            full_info.append(", \"");
            full_info.append( QString::fromStdString(Com.gettp()));
            full_info.append("\", ");
            full_info.append( QString::number(Com.getwcb()));
            full_info.append(")");
            if(i >= numOfCom-1){
                full_info.append(";");
            }
            else
                full_info.append(",");
        }
        inputComp.append(full_info);
        bool prepared = query.prepare(inputComp);
        if(prepared){
            query.exec();
        }
        else
            cout << query.lastError().text().toStdString() << endl; //report error
    }
    else
        cout << "db.open() returned false" << endl;
    db.close();

}
// basic output function
void output(char val, QSqlDatabase& db)
{
    bool db_ok = db.open();
    if(db_ok)
    {
        cout << endl;

        if(val == '1')
        {
            printPer(db);
        }
        else if(val == '2')
        {
            printComputer(db);
        }
        else if(val == '3')
        {
            printConnection(db);
        }
    }
    else
        cout << "db.open() returned false" << endl;
    db.close();

}
