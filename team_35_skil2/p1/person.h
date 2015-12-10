# ifndef PERCOM_H
# define PERCOM_H
#include <string>
#include <QtSql>

using namespace std;

class Person {
public:
    Person(string nm, string sx, int brth, int dth);
    string getname();
    string getsex();
    int getbirth();
    int getdeath();

private:
    string name, sex;
    int year_birth, year_death; // 0 = alive
};
// define functions
Person setPerson();


#endif // PERSON_H
