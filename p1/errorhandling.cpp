#include "variables.h"

int changeToInt(char val)
{
	if(isdigit(val))
		return val - '0';
	else
		return 0;
		
}

int inputInt(bool pos)
{
	//
	char temp_char = '\0';
	inputchoice(temp_char);
	int temp_int = changeToInt(temp_char);
	cout << temp_int << endl;
	if(pos && temp_int < 0)
		return 0;
	else
		return temp_int;
}
