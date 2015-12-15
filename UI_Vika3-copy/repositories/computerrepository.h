#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H

#include <QtSql>
#include <vector>
#include "computer.h"

//The ComputerRepository class handles reading and writing computers to and from a database

class ComputerRepository
{
public:
    ComputerRepository();

    //getAllComputers fetches all computers from the database
    std::vector<Computer> getAllComputers(std::string orderBy, bool orderAscending);

    //searchForComputers fetches all computers from the database and filters them on searchTerm
    std::vector<Computer> searchForComputers(std::string searchTerm, std::string orderBy, bool orderAscending);

    //addComputer saves a computer model to the database
    bool addComputer(Computer computer);

    //removeComputer removes computer from the database
    bool removeComputer(Computer computer);

private:

    //queryScientistsByComputer queries the database for scientists by computers
    std::vector<Scientist> queryScientistsByComputer(Computer computer);

    //queryComputers queries the database for computers
    std::vector<Computer> queryComputers(QString sqlQuery);

    QSqlDatabase db;
};

#endif // COMPUTERREPOSITORY_H
