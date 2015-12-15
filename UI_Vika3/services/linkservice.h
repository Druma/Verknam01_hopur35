#ifndef LINKSERVICE_H
#define LINKSERVICE_H

#include "linkrepository.h"

//The LinkService acts as a middle layer between the UI and Data layers
class LinkService
{
public:
    LinkService();

    //addLink saves a link between scientists and computers to a database
    bool addLink(std::string scientistId, std::string computerId);
private:
    LinkRepository linkRepo;
};

#endif // LINKSERVICE_H
