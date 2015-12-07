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

//void sortselection();
//void splitData(vector<Person>& newPerson);
void startup();
//void inputchoice(char& val);
char* inputchoice();
void choice_input(QSqlDatabase& db);
void choice_output(QSqlDatabase& db);
void startwork(char val, QSqlDatabase& db);
int changeToInt(char val);
int changeToInt(char* val);
int inputInt(bool pos = true);
int inputIntC(bool pos = true);
void NumOfSci(int& numOfSci);
void NumOfComp(int& numOfCom);
void inputscie(int& numOfSci, QSqlDatabase& db);
void inputComp(int& numOfCom, QSqlDatabase& db);
void sortNAME(QString& text_person, QString& order);
void sortCOMPUTER(QString& text_computer, QString& order);
void sortCONNECTION(QString& text_connection, QString& order);
void output(char val, QSqlDatabase& db);
//void printVect(vector<Person> vect);
//void split(const string& next, char c, vector<string>& newdata);
//void outputscie(vector<Person>& newPerson, bool prnt = false);
//void find_year();
//void search(vector<Person> vect);
//int find_nm(vector<Person> vect, string nm, int startpos, vector<int>&matches);
QString get_str(string x, string y);

#endif // VARIABLES

