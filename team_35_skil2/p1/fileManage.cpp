#include "person.h"
#include "computer.h"
#include "variables.h"
#include <cstdlib>
#include <iomanip>
//BOB THE BUILDER
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
            full_info.append( QString::fromStdString(Sci.getname()));
            full_info.append("\", \"");
            full_info.append( QString::fromStdString(Sci.getsex()));
            full_info.append("\", ");
            full_info.append( QString::number(Sci.getbirth()));
            full_info.append(", ");
            full_info.append( QString::number(Sci.getdeath()));
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
            full_info.append( QString::fromStdString(Com.getname()));
            full_info.append("\", ");
            full_info.append( QString::number(Com.getyearcreated()));
            full_info.append(", \"");
            full_info.append( QString::fromStdString(Com.gettype()));
            full_info.append("\", ");
            full_info.append( QString::number(Com.getwascreated()));
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

void printPer(QSqlDatabase& db)
{
    bool db_ok = db.open();
    if(db_ok)
    {
        QSqlQuery query = o_getPersonQuery(db);

        if(query.lastError().isValid())
            cout << query.lastError().text().toStdString() << endl;
        else
            printPersonTable(query);
        cout << endl;
    }
    else
        cout << "Error! Could not open database in function printPer()" << endl;
}

void printConnection(QSqlDatabase& db)
{
    bool db_ok = db.open();
    if(db_ok)
    {
        QSqlQuery query = o_getConnectionQuery(db);

        if(query.lastError().isValid())
            cout << query.lastError().text().toStdString() << endl;
        else
            printConnectionTable(query);
        cout << endl;
    }
    else
        cout << "Error! Could not open database in function printConnection()" << endl;
}

void printPersonTable(QSqlQuery& query)
{
    int width1 = 24;
    int width2 = 13;
    int width3 = 6;
    char sep = ' ';

    cout << " " << left << setw(width1) << setfill(sep) << "Name"           << " | "
                << left << setw(width3) << setfill(sep) << "Sex"            << " | "
                << left << setw(width2) << setfill(sep) << "Year of Birth"  << " | "
                << left << setw(width2) << setfill(sep) << "Year of Death"  << endl;

    cout << left << setw(width1 + width3 + width2 + width2 + 10) << setfill('-') << "" << endl;

    while(query.next())
    {
        cout << " " << left  << setw(width1) << setfill(sep) << query.value("name").toString().toStdString()   << " | "
                    << left << setw(width3) << setfill(sep) << query.value("sex").toString().toStdString()    << " | "
                    << right << setw(width2) << setfill(sep) << query.value("year_birth").toString().toStdString()  << " | ";
        if(query.value("year_death").toString().toStdString() == "0")
            cout << right << setw(width2) << setfill(sep) << "" << endl;
        else
            cout << right << setw(width2) << setfill(sep) << query.value("year_death").toString().toStdString() << endl;
    }
}

int printPersonTableINT(QSqlQuery& query, vector<Person>& vect)
{
    int width1 = 24;
    int width2 = 13;
    int width3 = 6;
    char sep = ' ';

    cout << " " << left << setw(width1) << setfill(sep) << "Name"           << " | "
                << left << setw(width3) << setfill(sep) << "Sex"            << " | "
                << left << setw(width2) << setfill(sep) << "Year of Birth"  << " | "
                << left << setw(width2) << setfill(sep) << "Year of Death"  << endl;

    cout << left << setw(width1 + width2 + width2 + width3 + 10) << setfill('-') << "" << endl;
    int i = 0;
    while(query.next())
    {
        vect.push_back(Person(query.value("name").toString().toStdString(), query.value("sex").toString().toStdString(), query.value("year_birth").toInt(), query.value("year_death").toInt()));
        cout << " " << left  << setw(width1) << setfill(sep) << vect.back().getname()     << " | "
                    << right << setw(width3) << setfill(sep) << vect.back().getsex()     << " | "
                    << right << setw(width2) << setfill(sep) << vect.back().getbirth()   << " | ";
        if(vect.back().getdeath() == 0)
            cout << right << setw(width2) << setfill(sep) << "" << endl;
        else
            cout << right << setw(width2) << setfill(sep) << vect.back().getdeath() << endl;
        i++;
    }
    return i;
}

void printComputerTable(QSqlQuery &query)
{
    int width1 = 29;
    int width2 = 13;
    int width3 = 21;
    int width4 = 5;
    char sep = ' ';

    cout << " " << left << setw(width1) << setfill(sep) << "Name"           << " | "
                << left << setw(width2) << setfill(sep) << "Creation Time"  << " | "
                << left << setw(width3) << setfill(sep) << "Type"           << " | "
                << left << setw(width4) << setfill(sep) << "Built"          << endl;

    cout << left << setw(width1+width2+width3+width4+10) <<setfill('-') << "" << endl;

    while(query.next())
    {
        cout << " " << left  << setw(width1) << setfill(sep) << query.value("name").toString().toStdString()          << " | "
                    << right << setw(width2) << setfill(sep) << query.value("year_creation").toString().toStdString() << " | "
                    << left  << setw(width3) << setfill(sep) << query.value("type").toString().toStdString()          << " | ";
            if(query.value("was_built").toString().toStdString() == "1")
               cout << left  << setw(width4) << setfill(sep) << "Yes" << endl;
            else
               cout << left  << setw(width4) << setfill(sep) << "No"  << endl;
    }
}

int printComputerTableINT(QSqlQuery &query, vector<Computer>& vect)
{
    int width1 = 29;
    int width2 = 13;
    int width3 = 21;
    int width4 = 5;
    char sep = ' ';

    cout << " " << left << setw(width1) << setfill(sep) << "Name"           << " | "
                << left << setw(width2) << setfill(sep) << "Creation Time"  << " | "
                << left << setw(width3) << setfill(sep) << "Type"           << " | "
                << left << setw(width4) << setfill(sep) << "Built"   << endl;

    cout << left << setw(width1 + width2 + width3 + width4 + 10) <<setfill('-') << "" << endl;
    int i = 0;
    while(query.next())
    {
        vect.push_back(Computer(query.value("name").toString().toStdString(), query.value("year_creation").toInt(), query.value("type").toString().toStdString(), query.value("was_built").toInt()));
        cout << " " << left  << setw(width1) << setfill(sep) <<  vect.back().getname() << " | "
                    << right << setw(width2) << setfill(sep) <<  vect.back().getyearcreated() << " | "
                    << left  << setw(width3) << setfill(sep) <<  vect.back().gettype() << " | ";
            if(vect.back().getwascreated() == true)
        cout        << left  << setw(width4) << setfill(sep) << "Yes" << endl;
            else
        cout        << left  << setw(width4) << setfill(sep) << "No" << endl;
        i++;
    }
    return i;
}

void printConnectionTable(QSqlQuery &query)
{
    int width1 = 24;
    int width2 = 29;
    int width3 = 4;
    char sep = ' ';

    cout << " " << left << setw(width1) << setfill(sep) << "Person"         << " | "
                << left << setw(width2) << setfill(sep) << "Computer"       << " | "
                << left << setw(width3) << setfill(sep) << "Year"           << endl;

    cout << left << setw(width1 + width2 + width3 + 7) <<setfill('-') << "" << endl;

    while(query.next())
    {
        cout << " " << left << setw(width1) << setfill(sep) << query.value("Person").toString().toStdString()   << " | "
                    << left << setw(width2) << setfill(sep) << query.value("Computer").toString().toStdString() << " | "
                    << left << setw(width3) << setfill(sep) << query.value("Year").toString().toStdString()     << endl;

    }
}

void printComputer(QSqlDatabase& db)
{
    bool db_ok = db.open();
    if(db_ok)
    {
        QSqlQuery query = o_getComputerQuery(db);

        if(query.lastError().isValid())
            cout << query.lastError().text().toStdString() << endl;
        else
            printComputerTable(query);
        cout << endl;
    }
    else
        cout << "Error! Could not open database in function printComputer()" << endl;
}
