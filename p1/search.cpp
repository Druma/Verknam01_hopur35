#include "person.h"
#include "variables.h"

string get_str() {
    string str;
    cout << "Search: ";
    getline(cin, str);
    return str;
}

int find_nm(vector<Person> vect, string nm, int startpos, vector<int>&matches) {


    for(unsigned int i = startpos; i < vect.size(); i++) {
        string name = vect[i].getnm();
        if (name.find(nm)!=string::npos) {
            matches.push_back(i);
            return i;
        }
    }
    return -2;
}
/*
int find_year(vector<Person> vect, string yr, int startpos, vector<int>&matches) {

    for(unsigned int i = startpos; i < vect.size(); i++) {
        int birth = vect[i].getbrth();
        size_t found = birth.find(yr, startpos);
        if (found!=string::npos) {
            matches.push_back(i);
            return found;
        }
        int death = vect[i].getdth();
        size_t found = death.find(yr, startpos);
        if (found!=string::npos) {
            matches.push_back(i);
            return found;
        }
    }
    return -2;
}
*/
void search(vector<Person> vect) {
    string searchstr = get_str();

    vector<int> matches;

    if(isdigit(searchstr[0])) {
/*        int startpos = -1;
        int i_yr = stoi(searchstr.c_str());
        do {
            startpos = find_year(vect, i_yr, startpos+1, matches);
        } while(startpos != -2);
*/    }
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
