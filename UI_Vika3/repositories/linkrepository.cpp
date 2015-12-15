#include "linkrepository.h"
#include "utilities/utils.h"

#include <cstdlib>
#include <sstream>
#include <QString>

using namespace std;

LinkRepository::LinkRepository()
{
    db = utils::getDatabaseConnection();
}

bool LinkRepository::addLink(string scientistName, string scientistYearBorn,
                             string computerName, string computerYearBuilt)
{
    db.open();

    if (!db.isOpen())
    {
        return false;
    }

    QSqlQuery query(db);

    stringstream sqlQuery;
    sqlQuery << "INSERT INTO ScientistComputerConnections (scientistName, scientistYearBorn, computerName, computerYearBuilt) VALUES ("
             << "'" << scientistName << "', "
             << "'" << scientistYearBorn << "', "
             << "'" << computerName << "', "
             << "'" << computerYearBuilt << "', "
             << ")";

    if (!query.exec(QString::fromStdString(sqlQuery.str())))
    {
        return false;
    }

    db.close();

    return true;
}

