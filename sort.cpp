#include <vector>
#include <algorithm>
#include <string>
#include "person.h"

using namespace std;

// helper functions
void _swap(Person& a, Person& b)
{
    Person temp = a;
    a = b;
    b = temp;
};
int _find(vector<Person> vect, const string nm, int start)
{
    do
    {
        if(vect[start].getnm() == nm)
            return start;
        start++;
    } while( start < vect.size() );

    return 0;
}
void _sort_name(vector<Person>& vect, const vector<string> nm)
{
    for(int i = 0; i<nm.size(); i++)
    {
        if(vect[i].getnm() != nm[i])
            _swap(vect[i], vect[_find(vect, nm[i], i)]);
    }

};

// main function
// sort after name; rev = reverse
void sort_name(vector<Person>& inputVect, bool rev = false)
{
    // variables
    vector<string> nameVect;

    // get all the names from list
    for(int i=0;i<inputVect.size();i++)
    {
        nameVect.push_back(inputVect[i].getnm());
    }

    // sort name list
    stable_sort(nameVect.begin(), nameVect.end());

    // reverse it
    if(rev)
    {
        reverse(nameVect.begin(), nameVect.end());
    }
    _sort_name(inputVect, nameVect);

};







