#include "person.h"
#include "variables.h"

using namespace std;



int main()
{
    int numOfSci = 0;
    vector<Person> compScientist;
    char val;
    do{
        startup();
        inputchoice(val);
        startwork(val, numOfSci, compScientist);
    }while(val != '4');

    return 0;
}



