#include "variables.h"
//READY
void startup() {
    cout << "==================================" << endl;
    cout << "Please select one of the following:" << endl;
    cout << "----------------------------------" << endl;
    cout << "[1] - Input data into tables" << endl;
    cout << "[2] - Output data from tables" << endl;
    cout << "[3] - Exit the program" << endl;
    cout << "Input: ";
}
//READY
/*void inputchoice(char& val) {
    cin >> val;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}*/
//READY
char* inputchoice() {
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
		cout <<"[1] - Input people" << endl;
		cout <<"[2] - Input computers" << endl;
		cout <<"Input: ";
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
		cout <<"[1] - Output people" << endl;
		cout <<"[2] - Output computers" << endl;
		cout <<"[3] - Output people-computer relations" << endl;
		cout <<"Input: ";
        val = inputchoice();
        if((strcmp(val, "1") == 0) || (strcmp(val, "2") == 0) || (strcmp(val, "3") == 0))
            output(val[0], db);
		else
			cout << "Choice invalid! Please choose again" << endl;
    }while((strcmp(val, "1") != 0) && (strcmp(val, "2") != 0) && (strcmp(val, "3") != 0));
}
