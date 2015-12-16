#ifndef COMPUTERSERVICE_H
#define COMPUTERSERVICE_H

#include <vector>
#include "computerrepository.h"

//The ComputerService acts as a middle layer between the UI and Data layers
class ComputerService
{
public:
    ComputerService();

    //getAllComputers fetches computers from the ComputerRepository
    std::vector<Computer> getAllComputers(std::string orderBy, bool orderAscending);

    //searchForComputers fetches all computers filtered on searchTerm
    std::vector<Computer> searchForComputers(std::string searchTerm, std::string orderBy, bool orderAscending);

    //addComputer saves a computer model to a database
    bool addComputer(Computer computer);

    //removeComputer removes computer from the database
    bool removeComputer(Computer computer);

private:
    ComputerRepository computerRepo;
};

#endif // COMPUTERSERVICE_H
