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
		//query.exec("SELECT * FROM Computer");
		QString text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID;";
		QString text_person = "SELECT name, sex, year_birth AS 'birth', year_death AS 'death' FROM Person;";
		QString text_computer = "SELECT name, year_creation AS 'creation', was_built AS 'built', type FROM Computer;";
		
		
		if(val == '3') // text_connection
		{
			query.exec(text_connection);
			if(query.lastError().isValid())
				cout << query.lastError().text().toStdString() << endl;
			else
			{
				cout << "Person, Computer, Year" << endl;
				cout << "----------------------" << endl;
				while(query.next())
				{
					cout << query.value("Person").toString().toStdString() << " | " << query.value("Computer").toString().toStdString() << " | " << query.value("Year").toString().toStdString() << endl;
				}
			}
        }
        else if(val == '1') // text_person
		{
			query.exec(text_person);
			if(query.lastError().isValid())
				cout << query.lastError().text().toStdString() << endl;
			else
			{
                int width = 16;


                char sep = ' ';
                cout << left << setw(width) << setfill(sep) << "Name"           << " | "
                     << left << setw(width/2) << setfill(sep) << "Sex"            << " | "
                     << left << setw(width) << setfill(sep) << "Year of Birth"  << " | "
                     << left << setw(width) << setfill(sep) << "Year of Death"  << endl;

                cout << left << setw((width+3)*3 + width/2) <<setfill('-') << "" << endl;

				while(query.next())
				{
                    cout << left  << setw(width) << setfill(sep) << query.value("name").toString().toStdString()   << " | "
                         << left  << setw(width/2) << setfill(sep) << query.value("sex").toString().toStdString()    << " | "
                         << right << setw(width) << setfill(sep) << query.value("birth").toString().toStdString()  << " | "
                         << right << setw(width) << setfill(sep) << query.value("death").toString().toStdString()  << endl;

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
				cout << "Name, Creation Time, Type, Was Built(?)" << endl;
				cout << "----------------------" << endl;
				while(query.next())
				{
					cout << query.value("name").toString().toStdString() << " | " << query.value("creation").toString().toStdString() << " | " << query.value("type").toString().toStdString()  << " | ";
					if(query.value("built").toString().toStdString() == "0")
						cout << "No" << endl;
					else
						cout << "Yes"<< endl;
				}
			}
		} // else if text_computer END
		cout << endl;
    }
    else
        cout << "db.open() returned false" << endl;
    db.close();
	
}
