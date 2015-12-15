#include "computerservice.h"

ComputerService::ComputerService()
{

}

std::vector<Computer> ComputerService::getAllComputers(std::string orderBy, bool orderAscending)
{
    return computerRepo.getAllComputers(orderBy, orderAscending);
}

std::vector<Computer> ComputerService::searchForComputers(std::string searchTerm, std::string orderBy, bool orderAscending)
{
    if (searchTerm.length() > 0)
    {
        return computerRepo.searchForComputers(searchTerm, orderBy, orderAscending);
    }
    else
    {
        return computerRepo.getAllComputers(orderBy, orderAscending);
    }
}

bool ComputerService::addComputer(Computer computer)
{
    return computerRepo.addComputer(computer);
}

bool ComputerService::removeComputer(Computer computer)
{
    return computerRepo.removeComputer(computer);
}

