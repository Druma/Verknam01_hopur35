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


