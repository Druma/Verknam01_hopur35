#include <sstream>
#include "PerCom.h"
#include "variables.h"

// return "SELECT * FROM x WHERE y LIKE '%z%'";
QString get_str(string x, string y)
{
	QString query;
	string str;
	
	query = "SELECT * FROM ";
	query.append(QString::fromStdString(x));
	query.append(" WHERE ");
	query.append(QString::fromStdString(y));
	query.append(" LIKE '%");
    
	
    cout << "Enter a year or name/character to search: ";
    getline(cin, str);
	
	query.append(QString::fromStdString(str));
	query.append(" %'");
	
    return query;
}

