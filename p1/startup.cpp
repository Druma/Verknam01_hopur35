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
void inputchoice(char& val) {
    cin >> val;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
//READY
char* inputchoice() {
	char* val = new char[0];
    cin >> val;
	return val;
}

void startwork(char& val, QSqlDatabase& db)
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
    }
}
void choice_input(QSqlDatabase& db)
{
	int numOfChange = 0;
	char val = '\0';
	 do{
		cout <<"[1] - Input people" << endl;
		cout <<"[2] - Input computers" << endl;
		cout <<"Input: ";
		inputchoice(val);
		if(val == '1')
			inputscie(numOfChange, db);
		else if(val == '2')
			inputComp(numOfChange, db);
		else
			cout << "Choice invalid! Please choose again" << endl;
	}while(val != '1' && val != '2');
}
void choice_output(QSqlDatabase& db)
{
	char val = '\0';
	 do{
		cout <<"[1] - Output people" << endl;
		cout <<"[2] - Output computers" << endl;
		cout <<"[3] - Output people-computer relations" << endl;
		cout <<"Input: ";
		inputchoice(val);
		if(val == '1' || val == '2' || val == '3')
			output(val, db);
		else
			cout << "Choice invalid! Please choose again" << endl;
	}while(val != '1' && val != '2' && val !='3');
}