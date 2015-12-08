#ifndef VARIABLES
#define VARIABLES
#include <iostream>
#include <limits>
#include "PerCom.h"
#include <cstdlib>
#include <QtSql>

const char EXIT = '4';

int changeToInt(char val);
int changeToInt(char* val);
int inputInt(bool pos = true);
int inputIntC(bool pos = true);

void NumOfSci(int& numOfSt);
void NumOfComp(int& numOfCom);
void NumOfConn(int& numOfConn);

void inputscie(int& numOfSci, QSqlDatabase& db);
void inputComp(int& numOfCom, QSqlDatabase& db);
void inputConn(int& numOfConn, QSqlDatabase& db);

void output(char val, QSqlDatabase& db);
QString get_str(string table, string column, string search);

void sortNAME(QString& text_person, QString& order);
void sortCOMPUTER(QString& text_computer, QString& order);
void sortCONNECTION(QString& text_connection, QString& order);

void startup();
char* inputchoice();
void startwork(char val, QSqlDatabase& db);

void choice_input(QSqlDatabase& db);
void choice_output(QSqlDatabase& db);
void choice_search(QSqlDatabase& db);

void search_people(QSqlDatabase& db);
void search_computer(QSqlDatabase& db);
void search_type(QSqlDatabase& db);

QString search_people();
QString search_computer();
//QString search_type();

QSqlQuery o_getPersonQuery(QSqlDatabase& db);
QSqlQuery o_getComputerQuery(QSqlDatabase& db);
QSqlQuery o_getConnectionQuery(QSqlDatabase& db);
QSqlQuery getQuery(QSqlDatabase& db, QString querystring);

void printPersonTable(QSqlQuery& query);
void printComputerTable(QSqlQuery& query);
void printConnectionTable(QSqlQuery& query);

int printPersonTableINT(QSqlQuery& query);
int printComputerTableINT(QSqlQuery& query);

#endif // VARIABLES

