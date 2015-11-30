#include "person.h"
#include "variables.h"

using namespace std;

const char EXIT = '5';

int main()
{
    int numOfSci = 0;
    vector<Person> compScientist;
	outputscie(compScientist);
    char val = '\0';
    do{
        startup();
        inputchoice(val);
        startwork(val, numOfSci, compScientist);
    }while(val != EXIT);

    return 0;
}



