#include "computer.h"
#include "variables.h"
//computer class
//Computer information
Computer::Computer(string nm, int yc, string tp, bool wc){

    name = nm;
    year_creation = yc;
    comptype = tp;
    was_created = wc;
}

string Computer::getname()
 {
     return name;
 }

int Computer::getyearcreated()
 {
     return year_creation;
 }

string Computer::gettype()
 {
     return comptype;
 }

bool Computer::getwascreated()
 {
     return was_created;
 }

Computer setComputer()
{
    string name, comptype;
    int yearCreate;
    bool built;

    legalComputer(name, yearCreate, comptype, built);

    return Computer(name, yearCreate, comptype, built);
}

