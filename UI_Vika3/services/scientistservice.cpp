#include "scientistservice.h"

#include <algorithm>

using namespace std;

ScientistService::ScientistService()
{

}

std::vector<Scientist> ScientistService::getAllScientists(string orderBy, bool orderAscending)
{
    return scientistRepo.getAllScientists(orderBy, orderAscending);
}

std::vector<Scientist> ScientistService::searchForScientists(string searchTerm, std::string orderBy, bool orderAscending)
{
    if (searchTerm.length() > 0)
    {
        return scientistRepo.searchForScientists(searchTerm, orderBy, orderAscending);
    }
    else
    {
        return scientistRepo.getAllScientists(orderBy, orderAscending);
    }
}

bool ScientistService::addScientist(Scientist scientist)
{
    return scientistRepo.addScientist(scientist);
}

bool ScientistService::removeScientist(Scientist scientist)
{
    return scientistRepo.removeScientist(scientist);
}
