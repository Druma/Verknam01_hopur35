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
void output(char val, QSqlDatabase& db)
{
    bool db_ok = db.open();
	if(db_ok)
	{
		cout << endl;
		QSqlQuery query(db);
        QString text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID;";
		QString text_person = "SELECT name, sex, year_birth AS 'birth', year_death AS 'death' FROM Person;";
		QString text_computer = "SELECT name, year_creation AS 'creation', was_built AS 'built', type FROM Computer;";
		
		
        if(val == '1') // text_person
		{
			query.exec(text_person);
			if(query.lastError().isValid())
				cout << query.lastError().text().toStdString() << endl;
			else
			{
                int width1 = 16;
                int width2 = 8;
                char sep = ' ';

                cout << " " << left << setw(width1) << setfill(sep) << "Name"           << " | "
                            << left << setw(width2) << setfill(sep) << "Sex"            << " | "
                            << left << setw(width1) << setfill(sep) << "Year of Birth"  << " | "
                            << left << setw(width1) << setfill(sep) << "Year of Death"  << endl;

                cout << left << setw((width1+3)*3 + width2 + 1) <<setfill('-') << "" << endl;

				while(query.next())
				{
                    cout << " " << left  << setw(width1) << setfill(sep) << query.value("name").toString().toStdString()   << " | ";
                    if(
                            query.value("sex").toString().toStdString()=="m"        ||
                            query.value("sex").toString().toStdString()=="male"     ||
                            query.value("sex").toString().toStdString()=="Male"         )
                        cout    << left  << setw(width2) << setfill(sep) << "Male" << " | ";

                    else if(
                            query.value("sex").toString().toStdString()=="f"        ||
                            query.value("sex").toString().toStdString()=="female"   ||
                            query.value("sex").toString().toStdString()=="Female"       )
                        cout    << left  << setw(width2) << setfill(sep) << "Female" << " | ";
                    else
                        cout    << left  << setw(width2) << setfill(sep) << "Error!" << " | ";

                        cout    << right << setw(width1) << setfill(sep) << query.value("birth").toString().toStdString()  << " | "
                                << right << setw(width1) << setfill(sep) << query.value("death").toString().toStdString()  << endl;

				}
			}
        }

        else if(val == '2') // text_computer
		{
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
                    cout        << left  << setw(width1) << setfill(sep) << "Yes"   << endl;
                        else
                    cout        << left  << setw(width1) << setfill(sep) << "No"    << endl;
				}
			}
        }

        else if(val == '3') // text_connection
        {
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
        }

	}
	else
		cout << "db.open() returned false" << endl;
	db.close();
	
}

