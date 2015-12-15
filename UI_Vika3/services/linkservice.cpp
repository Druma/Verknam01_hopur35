#include "linkservice.h"

#include <string>

using namespace std;

LinkService::LinkService()
{

}

bool LinkService::addLink(string scientistName, string scientistYearBorn,
                          string computerName, string computerYearBuilt)
{
    return linkRepo.addLink(scientistName, scientistYearBorn,
                            computerName, computerYearBuilt);
}
