#include "variables.h"
#include <limits>
#include <iomanip>
Person::Person(string nm, string sx, int brth, int dth)
{
    name = nm;
    sex = sx;
    year_birth = brth;
    year_death = dth;
}
 string Person::getnm()
 {
     return name;
 }

 string Person::getsx()
 {
     return sex;
 }

 int Person::getbrth()
 {
     return year_birth;
 }

 int Person::getdth()
 {
     return year_death;
 }

//Checks if users input data for person is legal or not
 void legalPerson(string& name, string& sex, int& brth, int& dth)
 {
    bool err = false;
    string ans;
    brth = 0;

    cout << "Name: ";
    cin.sync();
    getline(cin, name);
    toupper(name[0]);

    do{
        cout << "Gender - female/male: ";
        cin >> sex;
        if(sex[0] == 'f' || sex[0] == 'F'){
            sex = "Female";
            err = false;
        }
        else if(sex[0] == 'm' || sex[0] == 'M'){
            sex = "Male";
            err = false;
        }
        else{
            err = true;
            cout << "please enter: [female/male/f/m/F/M]" << endl;
        }
    }while(err);

    do{
        cout <<"Year of Birth: ";
        brth = inputIntC();
        if(brth > 0){
            err = false;
        }
        else{
            
            cout << "Please enter a valid date." << endl;
            err = true;
        }    
    }while(err);

    do{
        cout <<"Is the person still alive? y/n: ";
        cin >> ans;
        if(ans[0] == 'n' || ans[0] == 'N')
        {
            do{
                cout <<"Year of Death: ";
                dth = inputIntC();
                if(dth >= brth){
                    err = false;
                }
                else{
                    cout << "Please enter a valid date." << endl;
                    err = true;
                }
            }while(err);
        }
        else if(ans[0] == 'y' || ans[0] == 'Y') {
            dth  = '\0'; //TRY TO CHANGE THIS INTO EMPTY LINE INSTEAD OF 0
            err = false;
        }
        else {
            cout << "Please enter a valid letter." << endl;
            err = true;
        }
    }while(err);


 }

 Person setPerson()
{
    string name, sex;
    int brth, dth;

    legalPerson(name, sex, brth, dth);

    return Person(name, sex, brth, dth);
}

void printPer(QSqlDatabase& db)
{
    QSqlQuery query(db);
    QString text_person = "SELECT name, sex, year_birth AS 'birth', year_death AS 'death' FROM Person";
    QString order = ";";

    sortNAME(text_person, order);
    query.exec(text_person);
    if(query.lastError().isValid())
        cout << query.lastError().text().toStdString() << endl;
    else
    {
        int width1 = 16;
        int width2 = 8;
        char sep = ' ';

        cout << left << setw(width1) << setfill(sep) << "Name"           << " | "
             << left << setw(width2) << setfill(sep) << "Sex"            << " | "
             << left << setw(width1) << setfill(sep) << "Year of Birth"  << " | "
             << left << setw(width1) << setfill(sep) << "Year of Death"  << endl;

        cout << left << setw((width1+3)*3 + width2) <<setfill('-') << "" << endl;

        while(query.next())
        {
            cout << " " << left  << setw(width1) << setfill(sep) << query.value("name").toString().toStdString()   << " | "
                        << right << setw(width2) << setfill(sep) << query.value("sex").toString().toStdString()    << " | "
                        << right << setw(width1) << setfill(sep) << query.value("birth").toString().toStdString()  << " | ";
            if(query.value("death").toString().toStdString() == "0")
                cout << right << setw(width1) << setfill(sep) << "" << endl;
            else
                cout << right << setw(width1) << setfill(sep) << query.value("death").toString().toStdString() << endl;
        }
    }
    cout << endl;
}

//Computer information
Computer::Computer(string nm, int yc, string tp, bool wc){

    name = nm;
    year_creation = yc;
    comptype = tp;
    was_created = wc;
}
 string Computer::getnm()
 {
     return name;
 }

 int Computer::getyc()
 {
     return year_creation;
 }

 string Computer::gettp()
 {
     return comptype;
 }

 bool Computer::getwcb()
 {
     return was_created;
 }

 //Checks if users input data is legal or not
 void legalComputer(string& name, int& yearCre, string& tp, bool& wc)
 {
    bool err = false;
    string ans;

    cout <<"Name: ";
    cin.sync();
    getline(cin, name);
	
	do{
        cout <<"Year of Creation: ";
        yearCre = inputIntC();
        if(yearCre>0){
            err = false;
        }
        else{

            cout << "Please enter a valid date." << endl;
            err = true;
        }
    }while(err);

	
	cout <<"Type of Computer: ";
    cin.sync();
    getline(cin, tp);

	do{
        cout <<"Was the Computer ever built? y/n: ";
        cin >> ans;
        if(ans == "n" || ans == "N" || ans == "no" || ans == "NO" || ans == "No")
        {
            wc = false;
            err = false;
        }
        else if(ans == "y" || ans == "Y" || ans == "yes" || ans == "YES" || ans == "Yes")
        {
            wc = true;
            err = false;
        }
        else
		{
            cout << "Not a valid answer." << endl;
            err = true;
		}
    }while(err);
 }

Computer setComputer()
{
    string name, comptype;
    int yearCreate;
    bool built;

    legalComputer(name, yearCreate, comptype, built);

    return Computer(name, yearCreate, comptype, built);
}

void printComputer(QSqlDatabase& db)
{
    QSqlQuery query(db);
    QString text_computer = "SELECT name, year_creation AS 'creation', was_built AS 'built', type FROM Computer";
    QString order = ";";

    sortCOMPUTER(text_computer, order);
    query.exec(text_computer);
    if(query.lastError().isValid())
        cout << query.lastError().text().toStdString() << endl;
    else
    {
        int width1 = 16;
        int width2 = 24;
        int width3 = 12;
        char sep = ' ';

        cout << " " << left << setw(width2) << setfill(sep) << "Name"           << " | "
                    << left << setw(width1) << setfill(sep) << "Creation Time"  << " | "
                    << left << setw(width3) << setfill(sep) << "Type"           << " | "
                    << left << setw(width1) << setfill(sep) << "Was Built(?)"   << endl;

        cout << left << setw((width1+3)*2 + width2 + width3) <<setfill('-') << "" << endl;

        while(query.next())
        {
            cout << " " << left  << setw(width2) << setfill(sep) << query.value("name").toString().toStdString()      << " | "
                        << right << setw(width1) << setfill(sep) << query.value("creation").toString().toStdString()  << " | "
                        << left  << setw(width3) << setfill(sep) << query.value("type").toString().toStdString()      << " | ";
                if(query.value("built").toString().toStdString() == "1")
            cout        << left  << setw(width1) << setfill(sep) << "Yes" << endl;
                else
            cout        << left  << setw(width1) << setfill(sep) << "No" << endl;
        }
    }
    cout << endl;
}
//helper function to output person + computer relations
void printConnection(QSqlDatabase& db)
{
    QSqlQuery query(db);
    QString text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person "
                              "JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID";
    QString order = ";";

    sortCONNECTION(text_connection, order);
    query.exec(text_connection);
    if(query.lastError().isValid())
        cout << query.lastError().text().toStdString() << endl;
    else
    {
        int width1 = 16;
        int width2 = 24;
        int width3 = 8;
        char sep = ' ';

        cout << " " << left << setw(width1) << setfill(sep) << "Person"         << " | "
                    << left << setw(width2) << setfill(sep) << "Computer"       << " | "
                    << left << setw(width3) << setfill(sep) << "Year"           << endl;

        cout << left << setw(width1 + width2 + width3 + 6) <<setfill('-') << "" << endl;

        while(query.next())
        {
            cout << " " << left << setw(width1) << setfill(sep) << query.value("Person").toString().toStdString()   << " | "
                        << left << setw(width2) << setfill(sep) << query.value("Computer").toString().toStdString() << " | "
                        << left << setw(width3) << setfill(sep) << query.value("Year").toString().toStdString()     << endl;

        }
    }
    cout << endl;
}
