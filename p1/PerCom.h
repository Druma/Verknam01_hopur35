# ifndef PERSON_H
# define PERSON_H
#include <string>
#include <QtSql>

using namespace std;

class Person {
public:
    Person(string nm, string sx, int brth, int dth);
    string getnm();
    string getsx();
    int getbrth();
    int getdth();

private:
    string name, sex;
    int year_birth, year_death; // 0 = alive
};
// define functions
void legalPerson(string& name, string& sex, int& brth, int& dth);
Person setPerson();
void printPer(QSqlDatabase& db);

class Computer {
public:
    Computer(string nm, int yc, string tp, bool wc);
    string getnm();
    int getyc();
    string gettp();
    bool getwcb();

private:
    string name, comptype;
    int year_creation;
    bool was_created;
};
void legalComputer(string& name, int& yearCre, string& tp, bool& wc);
Computer setComputer();
void printComputer(QSqlDatabase& db);
void printConnection(QSqlDatabase& db);
void legalConnectionInput(int& IDpers, int& IDcomp, QSqlDatabase& db);

#endif // person.h
