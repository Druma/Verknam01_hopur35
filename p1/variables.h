#ifndef VARIABLES
#define VARIABLES
#include <vector>
#include <iostream>
#include "person.h"

void _swap(Person& a, Person& b);
int _find(vector<Person> vect, const string nm, unsigned int start);
void _sort_name(vector<Person>& vect, const vector<string> nm);
void sort_name(vector<Person>& inputVect, bool rev = false);
void sortselection(vector<Person>& vect);
void startup();
void inputchoice(char& val);
void startwork(char val, int numOfSci, vector<Person>& compScientist);
void NumOfSci(int& numOfSci);
void inputscie(int& numOfSci, vector<Person>& compScientist);
void printPer(Person per);
void printVect(vector<Person> vect);
void split(const string& next, char c, vector<string>& newdata);
void outputscie(vector<Person>& newPerson);

#endif // VARIABLES
//
