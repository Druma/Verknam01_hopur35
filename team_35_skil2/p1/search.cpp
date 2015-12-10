#include <sstream>
#include "person.h"
#include "computer.h"
#include "variables.h"
//WHAT DO YOU MEAN
void search_people(QSqlDatabase &db) {
    QString querystring = getPeopleQueryString();
    QSqlQuery query = getQuery(db, querystring);

    printPersonTable(query);
}

void search_computer(QSqlDatabase &db) {
    QString querystring = getComputerQueryString();
    QSqlQuery query = getQuery(db, querystring);

    printComputerTable(query);
}

void search_type(QSqlDatabase &db) {
    QString querystring = getTypeQueryString();
    QSqlQuery query = getQuery(db, querystring);

    printComputerTable(query);

}

QString getPeopleQueryString() {
    QString querystring;

    string search;
    cout << "Enter a name to search: ";
    search = inputchoice();

    querystring = get_str("Person", "name", search);

    return querystring;

}

QString getComputerQueryString() {
    QString querystring;

    string search;
    cout << "Enter a name to search: ";
    search = inputchoice();

    querystring = get_str("Computer", "name", search);

    return querystring;

}

QString getTypeQueryString() {
    QString querystring;

    string search;
    cout << "Enter a type to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Computer", "type", search);

    return querystring;

}


int search_for_id(QSqlDatabase &db, Person obj)
{
	QString querrystring = "SELECT ID FROM Person WHERE name = \"";
	
    querrystring.append(QString::fromStdString(obj.getname()));
	querrystring.append("\" AND sex = \"");
    querrystring.append(QString::fromStdString(obj.getsex()));
	querrystring.append("\" AND year_birth = ");
    querrystring.append(QString::number(obj.getbirth()));
	querrystring.append(" AND year_death = ");
    querrystring.append(QString::number(obj.getdeath()));
	querrystring.append(";");
	
	QSqlQuery querry(db);
	querry.exec(querrystring);
	
	while(querry.next())
		return querry.value("ID").toInt();
	return 0;
}
int search_for_id(QSqlDatabase &db, Computer obj)
{
	QString querrystring = "SELECT ID FROM Computer WHERE name = \"";
	
    querrystring.append(QString::fromStdString(obj.getname()));
	querrystring.append("\" AND year_creation = ");
    querrystring.append(QString::number(obj.getyearcreated()));
	querrystring.append(" AND type = \"");
    querrystring.append(QString::fromStdString(obj.gettype()));
	querrystring.append("\" AND was_built = ");
    querrystring.append(QString::number(obj.getwascreated()));
	querrystring.append(";");
	
	QSqlQuery querry(db);
	querry.exec(querrystring);
	
	while(querry.next())
		return querry.value("ID").toInt();
	return 0;
}

// return "SELECT * FROM x WHERE y LIKE '%z%'";
QString get_str(string table, string column, string search)
{
    QString query;

    query = "SELECT * FROM ";
    query.append(QString::fromStdString(table));
    query.append(" WHERE ");
    query.append(QString::fromStdString(column));
    query.append(" LIKE '%");
    query.append(QString::fromStdString(search));
    query.append("%';");

    return query;
}


