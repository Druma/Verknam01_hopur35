# ifndef PERSON_H
# define PERSON_H
#include <string>
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
Person setPerson();
void printPer(Person per);

#endif // person.h
//
