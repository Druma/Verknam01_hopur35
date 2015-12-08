#include <sstream>
#include "PerCom.h"
#include "variables.h"

void search_people(QSqlDatabase &db) {
    QString querystring;

    string search;
    cout << "Enter a name to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Person", "name", search);

    QSqlQuery query = getQuery(db, querystring);

    printPersonTable(query);

}
QString search_people() {
    QString querystring;

    string search;
    cout << "Enter a name to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Person", "name", search);

    return querystring;

}

void search_computer(QSqlDatabase &db) {
    QString querystring;

    string search;
    cout << "Enter a name to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Computer", "name", search);

    QSqlQuery query = getQuery(db, querystring);

    printComputerTable(query);

}
QString search_computer() {
    QString querystring;

    string search;
    cout << "Enter a name to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Computer", "name", search);

    return querystring;

}

void search_type(QSqlDatabase &db) {
    QString querystring;

    string search;
    cout << "Enter a type to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Computer", "type", search);

    QSqlQuery query = getQuery(db, querystring);

    printComputerTable(query);

}
/*
QString search_type() {
    QString querystring;

    string search;
    cout << "Enter a type to search: ";
    cin.ignore();
    getline(cin, search);

    querystring = get_str("Computer", "type", search);

    return querystring;

}
*/

int search_for_id(QSqlDatabase &db, Person obj)
{
	QString querrystring = "SELECT ID FROM Person WHERE name = \"";
	querrystring.append(QString::fromStdString(obj.getnm()));
	querrystring.append("\" AND sex = \"");
	querrystring.append(QString::fromStdString(obj.getsx()));
	querrystring.append("\" AND year_birth = ");
	querrystring.append(QString::number(obj.getbrth()));
	querrystring.append(" AND year_death = ");
	querrystring.append(QString::number(obj.getdth()));
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
	querrystring.append(QString::fromStdString(obj.getnm()));
	querrystring.append("\" AND year_creation = ");
	querrystring.append(QString::number(obj.getyc()));
	querrystring.append(" AND type = \"");
	querrystring.append(QString::fromStdString(obj.gettp()));
	querrystring.append("\" AND was_built = ");
	querrystring.append(QString::number(obj.getwcb()));
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


