#ifndef VARIABLES
#define VARIABLES
#include <iostream>
#include <limits>
#include "person.h"
#include "computer.h"
#include <cstdlib>
#include <QtSql>
#include <vector>

const char EXIT = '4';
//function declaration
int changeToInt(char* val);
int inputInt(bool pos = true);

void NumOfSci(int& numOfSt);
void NumOfComp(int& numOfCom);
void NumOfConn(int& numOfConn);

void inputscie(int& numOfSci, QSqlDatabase& db);
void inputComp(int& numOfCom, QSqlDatabase& db);
void inputConn(int& numOfConn, QSqlDatabase& db);

void printPer(QSqlDatabase& db);
void printComputer(QSqlDatabase& db);
void printConnection(QSqlDatabase& db);

void legalConnectionInput(int& IDpers, int& IDcomp, QSqlDatabase& db);
void legalPerson(string& name, string& sex, int& brth, int& dth);
void legalComputer(string& name, int& yearCre, string& tp, bool& wc);

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

QString getTypeQueryString();
QString getComputerQueryString();
QString getPeopleQueryString();

QSqlQuery o_getPersonQuery(QSqlDatabase& db);
QSqlQuery o_getComputerQuery(QSqlDatabase& db);
QSqlQuery o_getConnectionQuery(QSqlDatabase& db);
QSqlQuery getQuery(QSqlDatabase& db, QString querystring);

void printPersonTable(QSqlQuery& query);
void printComputerTable(QSqlQuery& query);
void printConnectionTable(QSqlQuery& query);

int printPersonTableINT(QSqlQuery& query, vector<Person>& vect);
int printComputerTableINT(QSqlQuery& query, vector<Computer>& vect);

int search_for_id(QSqlDatabase &db, Person obj);
int search_for_id(QSqlDatabase &db, Computer obj);

#endif // VARIABLES

