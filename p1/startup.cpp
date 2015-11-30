#include "variables.h"

void startup() {
    cout << "==================================" << endl;
    cout << "Please select one of the following:" << endl;
    cout << "----------------------------------" << endl;
    cout << "[1] - Input a person/s into the list" << endl;
    cout << "[2] - Output the whole list" << endl;
    cout << "[3] - Search for a person in the list" << endl;
    cout << "[4] - Exit the program" << endl;
    cout << "Input: ";
}

void inputchoice(char& val) {
    cin >> val;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void startwork(char& val, int numOfSci, vector<Person>& compScientist)
{
    switch(val)
    {
        case '1' :
            inputscie(numOfSci, compScientist);
                break;
        case '2' :
            sortselection(compScientist);
                break;
        case '3' :
            search(compScientist);
                break;
        case '4' :
                break;
        default :
            cout << "Input is not valid!" << endl;
    }

}
