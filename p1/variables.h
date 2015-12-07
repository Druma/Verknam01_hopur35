#ifndef VARIABLES
#define VARIABLES
#include <iostream>
#include <limits>
#include "PerCom.h"
#include <cstdlib>
#include <QtSql>

const char EXIT = '3';

int changeToInt(char val);
int changeToInt(char* val);
int inputInt(bool pos = true);
int inputIntC(bool pos = true);
void NumOfSci(int& numOfSt);
void NumOfComp(int& numOfCom);
void inputscie(int& numOfSci, QSqlDatabase& db);
void inputComp(int& numOfCom, QSqlDatabase& db);
void output(char val, QSqlDatabase& db);
QString get_str(string x, string y);
void sortNAME(QString& text_person, QString& order);
void sortCOMPUTER(QString& text_computer, QString& order);
void sortCONNECTION(QString& text_connection, QString& order);
void startup();
char* inputchoice();
void startwork(char val, QSqlDatabase& db);
void choice_input(QSqlDatabase& db);
void choice_output(QSqlDatabase& db);

#endif // VARIABLES

