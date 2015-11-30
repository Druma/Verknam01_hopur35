#include <sstream>
#include "person.h"
#include "variables.h"

string get_str() {
    string str;
    cout << "Enter a year or name/character to search: ";
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

int find_year(vector<Person> vect, string yr, int startpos, vector<int>&matches) {

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
}

void outputMatches(vector<Person> vect, vector<int> matches) {
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

void search(vector<Person> vect) {
    vector<int> matches;
    string searchstr = get_str();

    if(isdigit(searchstr[0])) {
        int startpos = -1;
        do {
            startpos = find_year(vect, searchstr, startpos+1, matches);
        } while(startpos != -2);
    }
    else {
        int startpos = -1;
        do {
            startpos = find_nm(vect, searchstr, startpos+1, matches);
        } while(startpos != -2);
    }
    outputMatches(vect, matches);
}
