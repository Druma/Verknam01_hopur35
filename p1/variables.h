#ifndef VARIABLES
#define VARIABLES
//#include "sql.h"
#include <vector>
#include <iostream>
#include <limits>
#include "person.h"
#include <cstdlib>
#include <QtSql>

const char EXIT = '3';



//void _swap(Person& a, Person& b);
//int _find(vector<Person> vect, const string nm, unsigned int start);
//void _sort_name(vector<Person>& vect, const vector<string> nm);
//void sort_name(vector<Person>& inputVect, bool rev = false);
void sortselection();
void splitData(vector<Person>& newPerson);
void startup();
void inputchoice(char& val);
char* inputchoice();
void startwork(char& val, int numOfSci, int numOfCom);
int changeToInt(char val);
int changeToInt(char* val);
int inputInt(bool pos = true);
int inputIntC(bool pos = true);
void NumOfSci(int& numOfSci);
void NumOfComp(int& numOfCom);
void inputscie(int& numOfSci);
void inputComp(int& numOfCom);
//void printPer(Person per);
//void printVect(vector<Person> vect);
void split(const string& next, char c, vector<string>& newdata);
void outputscie(vector<Person>& newPerson, bool prnt = false);
void find_year();
void search(vector<Person> vect);
    int find_nm(vector<Person> vect, string nm, int startpos, vector<int>&matches);
string get_str();

#endif // VARIABLES

