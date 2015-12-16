#ifndef SCIENTISTSERVICE_H
#define SCIENTISTSERVICE_H

#include "scientistrepository.h"

//The ScientistService acts as a middle layer between the UI and Data layers

class ScientistService
{
public:
    ScientistService();

    //getAllScientists fetches scientists from the ScientistRepository
    std::vector<Scientist> getAllScientists(std::string orderBy, bool orderAscending);

    //searchForScientists fetches all scientists filtered on searchTerm
    std::vector<Scientist> searchForScientists(std::string searchTerm, std::string orderBy, bool orderAscending);

    //addScientist saves a scientist model to a database
    bool addScientist(Scientist scientist);

    //removeScientist removes scientist from the database
    bool removeScientist(Scientist scientist);
private:
    ScientistRepository scientistRepo;
};

#endif // SCIENTISTSERVICE_H
