#include <string>
#include <fstream>
#include <vector>
#include "node.h"

using namespace std;

void NumOfSci(int& numOfSci, int& Size);

Node setNode()
{
    string name, sex;
    int, brth, dth;

    cout <<"Name: ";
    cin >> name;

    cout <<"Sex: ";
    cin >> sex;

    cout <<"Year of Birth: ";
    cin >> brth;

    cout <<"Year of Death: ";
    cin >> dth;

    return Node(name, sex, brth, dth);

}


void NumOfSci(int& numOfSt, int& Size)
{
    cout <<"Number of computer scientist: ";
    cin >> numOfSci;
    cout <<"\n--- Reading scientist ---" << endl;
}


int main()
{
    int numOfSci = 0;
    vector<Node> compScientist;
    ifstream putdata;
    ofstream getdata;

    putdata.open("inputdata.txt", ios::app);
    if(putdata.fail())
    {
        cout << "fail to open file!" << endl;
        exit();
    }
    getdata.open("data.txt", ios::app);
    if(getdata.fail())
    {
        cout << "fail to open file!" << endl;
        exit();
    }

    NumOfSci(numOfSci);

    for(int i = 0; i<numOfSci; i++)
    {

        compScientist.push_back(setNode());
        //cout << endl;

    }

    putdata.close();
    getdata.close();

    return 0;
}

