#include "person.h"
#include "variables.h"

string _get_searchstr() {
    string str;
    cin.ignore();
    cout << "Search: ";
    getline(cin, str);
    return str;
}

int find_nm(vector<Person> vect, string nm, int startpos, vector<int>&matches) {


    for(unsigned int i = startpos; i < vect.size(); i++) {
        string name = vect[i].getnm();
        size_t found = name.find(nm, startpos);
        if (found!=string::npos) {
            matches.push_back(i);
            return found;
        }
    }
    return -2;
}

void find_year() {
    cout << "This is a year!" << endl;

}

void search(vector<Person> vect) {
    string searchstr = _get_searchstr();

    vector<int> matches;

    if(isdigit(searchstr[0])) {
        find_year();
    }
    else {
        int startpos = -1;
        do {
            startpos = find_nm(vect, searchstr, startpos+1, matches);
        } while(startpos != -2);
    }


    cout << "------------ Matches -------------" << endl;

    for(unsigned int i = 0; i < matches.size(); i++) {
        printPer (vect[(matches[i])]);
    }
}
