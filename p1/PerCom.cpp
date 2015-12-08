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

    do{
        cout << "Gender - f/m: ";
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
            cout << "Input invalid, please enter 'f' for female or 'm' for male" << endl;
        }
    }while(err);

    do{
        cout <<"Year of Birth: ";
        brth = inputInt();
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
                dth = inputInt();
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
            dth  = '\0';
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
        yearCre = inputInt();
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
/* ------------------------------------------------------------------------------------------ */
//helper function to output person + computer relations
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
                    << right << setw(width3) << setfill(sep) << query.value("sex").toString().toStdString()    << " | "
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
        cout << " " << left  << setw(width1) << setfill(sep) << vect.back().getnm()     << " | "
                    << right << setw(width3) << setfill(sep) << vect.back().getsx()     << " | "
                    << right << setw(width2) << setfill(sep) << vect.back().getbrth()   << " | ";
        if(vect.back().getdth() == 0)
            cout << right << setw(width2) << setfill(sep) << "" << endl;
        else
            cout << right << setw(width2) << setfill(sep) << vect.back().getdth() << endl;
		i++;
    }
	return i;
}

void printComputerTable(QSqlQuery &query)
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
                    << right << setw(width1) << setfill(sep) << query.value("year_creation").toString().toStdString()  << " | "
                    << left  << setw(width3) << setfill(sep) << query.value("type").toString().toStdString()      << " | ";
            if(query.value("was_built").toString().toStdString() == "1")
        cout        << left  << setw(width1) << setfill(sep) << "Yes" << endl;
            else
        cout        << left  << setw(width1) << setfill(sep) << "No" << endl;
    }
}
int printComputerTableINT(QSqlQuery &query, vector<Computer>& vect)
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
	int i = 0;
    while(query.next())
    {
		vect.push_back(Computer(query.value("name").toString().toStdString(), query.value("year_creation").toInt(), query.value("type").toString().toStdString(), query.value("was_built").toInt()));
        cout << " " << left  << setw(width2) << setfill(sep) <<  vect.back().getnm() << " | "
                    << right << setw(width1) << setfill(sep) <<  vect.back().getyc() << " | "
                    << left  << setw(width3) << setfill(sep) <<  vect.back().gettp() << " | ";
            if(vect.back().getwcb() == true)
        cout        << left  << setw(width1) << setfill(sep) << "Yes" << endl;
            else
        cout        << left  << setw(width1) << setfill(sep) << "No" << endl;
		i++;
    }
	return i;
}

void printConnectionTable(QSqlQuery &query)
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

void legalConnectionInput(int& IDpers, int& IDcomp, QSqlDatabase& db)
{
	bool error = false;
	IDpers = 0;
	IDcomp = 0;
	vector<Person> VECTpers;
	cout << "Inputing Person" << endl;
    QString person = getPeopleQueryString();
	QSqlQuery query = getQuery(db, person);
	int NUMpeople = printPersonTableINT(query, VECTpers);
	if(NUMpeople < 1)
		error = true;
	if(!error)
	{
		if(NUMpeople ==1)
		{
			cout << "1 person found and set" << endl;
			IDpers = NUMpeople -1;
			error = false;
		}
		else
		{
			cout << NUMpeople << " people found" << endl;
			cout << "Enter the row number of the correct person:";
			IDpers = inputInt(); 
			if(IDpers < 1)
			{
				cout << "Number not on list. Ending Input." << endl;
				error = true;
			}
			else
			{
				error = false;
				IDpers--;
				cout << "Person set." << endl;
			}
		} // else for if(NUMpeople ==1) END
		if(!error)
		{
			error = false; // Justin Case
			vector<Computer> VECTcomp;
			cout << "Inputing Computer" << endl;
            QString computer = getComputerQueryString();
			QSqlQuery query2 = getQuery(db, computer);
			int NUMcomputers = printComputerTableINT(query2, VECTcomp);
			if(NUMpeople < 1)
				error = true;
			if(!error)
			{
				if(NUMcomputers ==1)
				{
                    cout << "1 computer found and set" << endl;
					IDcomp = NUMcomputers -1;
					error = false;
				}
				else
				{
                    cout << NUMcomputers << " computers found" << endl;
                    cout << "Enter the row number of the correct computer:";
					IDcomp = inputInt();
					if(IDcomp < 1)
					{
                        cout << "Number not on list. Ending Input." << endl;
						error = true;
					}
					else
					{
						error = false;
						IDcomp--;
                        cout << "Computer set." << endl;
					}
					
				} // else for if(NUMcomputers ==1) END
				if(!error)
					{
						IDpers = search_for_id(db, VECTpers.at(IDpers));
						IDcomp = search_for_id(db, VECTcomp.at(IDcomp));
					} // if(!error) #3 END
			}
			else
				cout << "No computer found. Ending Input." << endl;
		} // if(!error) #2 END
	} // if(!error) #1 END
	else
		cout << "No person found. Ending Input." << endl;
		
	
}
