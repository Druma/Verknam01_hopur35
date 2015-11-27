#include <iostream>
#include <fstream>
using namespace std;

void startup();
char inputint();
void startwork(char val);

int main()
{
    startup();
    char val = inputint();

    startwork(val);

	return 0;
}

void startup() {
    cout << "Please select one of the following: " << endl;
    cout << "---------------------------------- " << endl;
    cout << "[1] Input a person into the list" << endl;
    cout << "[2] Output the whole list" << endl;
    cout << "[3] Search for a person in the list" << endl;
    cout << "[4] Exit the program" << endl;
}

char inputint() {
    char val;
    cin >> val;
    return val;
}

void startwork(char val) {
    switch(val) {
    case '1' :
//        input();
        break;
    case '2' :
//        output();
        break;
    case '3' :
//        fsearch();
        break;
    case '4' :
        break;
    default :
        cout << "Please input a valid option" << endl;
        val = inputint();
        startwork(val);
    }
}
