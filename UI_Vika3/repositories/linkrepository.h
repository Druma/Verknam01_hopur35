#ifndef LINKREPOSITORY_H
#define LINKREPOSITORY_H

#include <QtSql>
#include <vector>
#include <string>

//The LinkRepository handles connections between scientists and computers in the database

class LinkRepository
{
public:
    LinkRepository();

    //addLink saves a link between scientist and computer to the database
    bool addLink(std::string scientistId, std::string computerId);
private:
    QSqlDatabase db;
};

#endif // LINKREPOSITORY_H
