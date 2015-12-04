#include "variables.h"
//READY
void startup() {
    cout << "==================================" << endl;
    cout << "Please select one of the following:" << endl;
    cout << "----------------------------------" << endl;
    cout << "[1] - Input data into the table/s" << endl;
    cout << "[2] - Output data from the table/s" << endl;
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

void startwork(char& val, int numOfSci, int numOfCom)
{
    switch(val)
    {
        case '1' :
            do{
                inputchoice(val);
                if(val == '1')
                    inputscie(numOfSci);
                else if(val == '2')
                    inputComp(numOfCom);
                else
                    cout << "Choice invalid! Please choose again" << endl;
           }while(val != '1' || val != '2');
                break;
        case '2' :
            //OUTPUT DATA HERE
                break;
        case '3' :
                break;
        default :
            cout << "Input is not valid!" << endl;
    }
}
