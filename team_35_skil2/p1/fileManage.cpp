#include "PerCom.h"
#include "variables.h"
#include <cstdlib>
#include <iomanip>

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
            cout << endl;
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

// update Connection
void inputConn(int& numOfConn, QSqlDatabase& db)
{
    
		QString full_info = "";
        NumOfConn(numOfConn);
		int id_pers, id_comp;
        for(int i = 0; i < numOfConn; i++){
            legalConnectionInput(id_pers, id_comp, db);
            full_info.append("(");
            full_info.append(QString::number(id_pers));
            full_info.append(", ");
            full_info.append(QString::number(id_comp));
            full_info.append(")");
            if(i >= numOfConn-1){
                full_info.append(";");
            }
            else
                full_info.append(", ");
        }
        
	bool db_ok = db.open();
    if(db_ok)
    {
        
        QString inputConnect = "INSERT INTO PersonComputer (id_person, id_computer) VALUES ";
        QSqlQuery query(db);
		
		inputConnect.append(full_info);
        //cout << endl << inputConnect.toStdString() << endl;
		
        bool prepared = query.prepare(inputConnect);
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

QSqlQuery o_getPersonQuery(QSqlDatabase& db)
{
    QSqlQuery query(db);
    QString text_person = "SELECT name, sex, year_birth, year_death FROM Person";
    QString order = ";";

    sortNAME(text_person, order);
    query.exec(text_person);

    return query;
}

QSqlQuery o_getComputerQuery(QSqlDatabase& db)
{
    QSqlQuery query(db);
    QString text_computer = "SELECT name, type, year_creation, was_built FROM Computer";
    QString order = ";";

    sortCOMPUTER(text_computer, order);
    query.exec(text_computer);

    return query;
}

QSqlQuery o_getConnectionQuery(QSqlDatabase& db)
{
    QSqlQuery query(db);
    QString text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person "
                              "JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID";
    QString order = ";";

    sortCONNECTION(text_connection, order);
    query.exec(text_connection);

    return query;
}

QSqlQuery getQuery(QSqlDatabase& db, QString querystring)
{
    QSqlQuery query(db);

    query.exec(querystring);

    return query;
}
