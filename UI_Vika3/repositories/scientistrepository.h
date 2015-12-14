#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include <QtSql>
#include <vector>
#include <string>
#include "scientist.h"

//The ScientistRepository class handles reading and writing scientists to and from a database

class ScientistRepository
{
public:
    ScientistRepository();

    //getAllScientists fetches all scientists from the database
    std::vector<Scientist> getAllScientists(std::string orderBy, bool orderAscending);

    //searchForScientists fetches all scientists from the database and filters them on searchTerm
    std::vector<Scientist> searchForScientists(std::string searchTerm, std::string orderBy, bool orderAscending);

    //addScientist saves a scientist model to the database
    bool addScientist(Scientist scientist);

    //removeScientist removes scientist from the database
    bool removeScientist(Scientist scientist);

private:

    //queryComputersByScientist queries the database for computers by scientists
    std::vector<Computer> queryComputersByScientist(Scientist scientist);

    //queryScientists queries the database for scientists
    std::vector<Scientist> queryScientists(QString sqlQuery);

    QSqlDatabase db;
};

#endif // SCIENTISTREPOSITORY_H
