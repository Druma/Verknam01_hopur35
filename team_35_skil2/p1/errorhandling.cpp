#include "variables.h"

int changeToInt(char* val)
{
	if(isdigit(val[0]))
		return atoi(val);
	else
		return 0;
}

int inputInt(bool pos)
{
    char* temp_char = '\0';
    temp_char = inputchoice();
	int temp_int = changeToInt(temp_char);
	//cout << temp_int << endl;
	if(pos && temp_int < 0)
		return 0;
	else
		return temp_int;
}

