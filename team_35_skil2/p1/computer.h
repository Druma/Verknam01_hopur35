# ifndef COMPUTER_H
# define COMPUTER_H
#include <QtSql>
#include <string>
#include "person.h"
//class for comp
class Computer {
public:
    Computer(string nm, int yc, string tp, bool wc);
    string getname();
    int getyearcreated();
    string gettype();
    bool getwascreated();

private:
    string name, comptype;
    int year_creation;
    bool was_created;
};
// define functions
Computer setComputer();

#endif // COMPUTER_H
