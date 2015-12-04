#include "person.h"
#include "variables.h"
#include <QtSql>
using namespace std;

int main()
{

    int numOfSci = 0, numOfCom = 0;
    //outputscie(compScientist);
    char val = '\0';
    do{
        startup();
        inputchoice(val);
        startwork(val, numOfSci, numOfCom);
    }while(val != EXIT);
	

    return 0;
}



