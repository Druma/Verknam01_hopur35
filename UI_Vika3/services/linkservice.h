#ifndef LINKSERVICE_H
#define LINKSERVICE_H

#include "linkrepository.h"

/**
 * @brief The LinkService acts as a middle layer between the UI and Data layers
 */

class LinkService
{
public:
    LinkService();

    /**
     * @brief addLink saves a link between scientists and computers to a database
     * @return true if it was a success, false if it was a failure
     */
    bool addLink(std::string scientistName, std::string scientistYearBorn,
                 std::string computerName, std::string computerYearBuilt);
private:
    LinkRepository linkRepo;
};

#endif // LINKSERVICE_H
