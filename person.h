# ifndef PERSON_H
# define PERSON_H
#include <string>
using namespace std;

class Person {
public:
    Person(string nm, string sx, int brth, int dth);

private:
    string name, sex;
    int year_birth, year_death; // 0 = alive
};

// define functions
Person::Person(string nm, string sx, int brth, int dth)
{
    name = nm;
    sex = sx;
    year_birth = brth;
    year_death = dth;
}



#endif // person.h
