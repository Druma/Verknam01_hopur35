#include "variables.h"

void startup()
{
    cout << "=================================="    << endl;
    cout << "Please select one of the following:"   << endl;
    cout << "----------------------------------"    << endl;
    cout << "[1] - Input data into tables"          << endl;
    cout << "[2] - Output data from tables"         << endl;
    cout << "[3] - Search data"                     << endl;
    cout << "[4] - Exit the program"                << endl;
    cout << "Input: ";
}

char* inputchoice()
{
	char* val = new char[0];
    cin >> val;
	return val;
}

void startwork(char val, QSqlDatabase& db)
{
    switch(val)
    {
        case '1' :
			choice_input(db);
            break;
        case '2' :
            choice_output(db);
            break;
        case '3' :
            choice_search(db);
            break;
        case '4' :
            break;
        default :
            cout << "Input is not valid!" << endl;
            cout << endl;
    }
}

void choice_input(QSqlDatabase& db)
{
	int numOfChange = 0;
    char* val = '\0';
	 do{
        cout << "[1] - Input people"        << endl;
        cout << "[2] - Input computers"     << endl;
        cout << "[3] - Input connection"    << endl;
        cout << "Input: ";
        val = inputchoice();
        cout << endl;
        if(strcmp(val, "1") == 0)
			inputscie(numOfChange, db);
        else if(strcmp(val, "2") == 0)
			inputComp(numOfChange, db);
		else
            cout << "Choice invalid! Please choose again" << endl;
    }while((strcmp(val, "1") != 0) && (strcmp(val, "2") != 0));
}

void choice_output(QSqlDatabase& db)
{
    char* val = '\0';
	 do{
        cout << "[1] - Output people"                     << endl;
        cout << "[2] - Output computers"                  << endl;
        cout << "[3] - Output people-computer relations"  << endl;
        cout << "Input: ";
        val = inputchoice();
        if((strcmp(val, "1") == 0) || (strcmp(val, "2") == 0) || (strcmp(val, "3") == 0))
            output(val[0], db);
		else
			cout << "Choice invalid! Please choose again" << endl;
    }while((strcmp(val, "1") != 0) && (strcmp(val, "2") != 0) && (strcmp(val, "3") != 0));
}

void choice_search(QSqlDatabase& db)
{
    char* val = '\0';
     do{
        cout << "[1] - Search people"           << endl;
        cout << "[2] - Search computers"        << endl;
        cout << "[3] - Search computer types"   << endl;
        cout << "Input: ";
        val = inputchoice();
        if(strcmp(val, "1") == 0) {
            search_people(db);
        }
        else if(strcmp(val, "2") == 0) {
            search_computer(db);
        }
        else if(strcmp(val, "3") == 0) {
            search_type(db);
        }
        else
            cout << "Choice invalid! Please choose again" << endl;
    }while((strcmp(val, "1") != 0) && (strcmp(val, "2") != 0) && (strcmp(val, "3") != 0));

}

// basic output function
void output(char val, QSqlDatabase& db)
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
