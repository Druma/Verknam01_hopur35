#include <algorithm>
#include "person.h"
#include "variables.h"

using namespace std;

// helper functions
void _swap(Person& a, Person& b)
{
    Person temp = a;
    a = b;
    b = temp;
}
int _find(vector<Person> vect, const string nm, unsigned int start)
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
    for(unsigned int i = 0; i<nm.size(); i++)
    {
        if(vect[i].getnm() != nm[i])
            _swap(vect[i], vect[_find(vect, nm[i], i)]);
    }

}

// main function
// sort after name; rev = reverse
void sort_name(vector<Person>& inputVect, bool rev)
{
    // variables
    vector<string> nameVect;

    // get all the names from list
    for(unsigned int i=0;i<inputVect.size();i++)
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

}
//sort year of death
//void sort_YOD()
//{

//}


void sortselection(vector<Person>& vect)
{
    char choice;
    char valid = 'N';

    cout << "How would you like your output list to be sorted: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "[1] Oldest data to newest" << endl;
    cout << "[2] In alphabetical order" << endl;
    cout << "[3] In reverse alphabetical order" << endl;
    do{
        inputchoice(choice);
        if(choice == '1'){
            outputscie(vect);
                break;
        }
        else if(choice == '2'){
            sort_name(vect);
            printVect(vect);
                break;
        }
        else if(choice == '3'){
            sort_name(vect, true);
            printVect(vect);
                break;
        }
        else
        {
            cout << "Input is not valid! Please choose again" << endl;
            valid = 'Y';
        }
    }while(valid == 'Y');
}

