#include "variables.h"

void startup() {
    cout << "Please select one of the following: " << endl;
    cout << "---------------------------------- " << endl;
    cout << "[1] Input a person/s into the list" << endl;
    cout << "[2] Output the whole list" << endl;
    cout << "[3] Search for a person in the list" << endl;
    cout << "[4] Exit the program" << endl;
}

void inputchoice(char& val) {
    cin >> val;
}

void startwork(char val, int numOfSci, vector<Person>& compScientist) {

        switch(val) {
            case '1' :
                inputscie(numOfSci, compScientist);
                break;
            case '2' :
                outputscie(compScientist);
                break;
            case '3' :
                sort_name(compScientist);
                printVect(compScientist);
                sort_name(compScientist, true);
                printVect(compScientist);
                break;
            case '4' :
                break;
            default :
                cout << "Please input a valid option" << endl;
                //inputchoice(val);
                //startwork(val);
    }
}
