#include <sstream>
#include "person.h"
#include "variables.h"

// return "SELECT * FROM x WHERE y LIKE '%z%'";
QString get_str(string x, string y) {
	
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

/*int find_nm(vector<Person> vect, string nm, int startpos, vector<int>&matches) {

    for(unsigned int i = startpos; i < vect.size(); i++) {
        string name = vect[i].getnm();
        if (name.find(nm)!=string::npos) {
            matches.push_back(i);
            return i;
        }
    }
    return -2;
}*/

/*int find_year(vector<Person> vect, string yr, int startpos, vector<int>&matches) {

    for(unsigned int i = startpos; i < vect.size(); i++) {
        int i_birth = vect[i].getbrth();
        int i_death = vect[i].getdth();
        string birth, death;
        stringstream ss;
        ss << i_birth << ' ' << i_death;
        ss >> birth >> death;

        if (birth.find(yr)!=string::npos) {
            matches.push_back(i);
            return i;
        }

        if (death.find(yr)!=string::npos) {
            matches.push_back(i);
            return i;
        }
    }
    return -2;
}*/

/*void outputMatches(vector<Person> vect, vector<int> matches) {
    if(matches.size() != 0) {
        cout << "------------ Matches -------------" << endl;

        for(unsigned int i = 0; i < matches.size(); i++) {
            printPer (vect[(matches[i])]);
        }
    }
    else {
        cout << "No matches! " << endl;
    }
}
*/
