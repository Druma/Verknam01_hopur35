# ifndef NODE_H
# define NODE_H
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Node {
public:
    string getName();
    double getSex();
    int getYearBirth(), getYearDeath();
    void setName(ifstream putdata), setSex(ifstream putdata);
    void setYearBirth(ifstream putdata), setYearDeath(ifstream putdata);

private:
    string name, sex;
    int year_birth, year_death; // 0 = alive
};


#endif // node.h
void NumOfSci(int& numOfSci, int& Size);

void Node::setName(ofstream putdata)
{
    cout <<"Name: ";
    putdata >> name;
}

void Node::setSex(ifstream putdata)
{
    cout << "Sex: ";
    putdata >> sex;
}

void Node::setYearBirth(ifstream putdata)
{
    cout << "Year of birth: ";
    putdata >> year_birth;
}

void Node::setYearDeath(ifstream putdata)
{
    cout << "Year of death: ";
    putdata >> year_death;
}

string Node::getName()
{
    return name;
}

double Node::getSex()
{
    return sex;
}

int Node::getYearBirth()
{
    return year_birth;
}

int Node::getYearDeath()
{
    return year_death;
}

void NumOfSci(int& numOfSt, int& Size)
{
    cout <<"Number of computer scientist: ";
    cin >> numOfSci;
    cout <<"\n--- Reading scientist ---" << endl;
}


int main()
{
    Node node;
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

    do{
        node.setName(putdata);
        node.setSex(putdata);
        node.setYearBirth(putdata);
        node.setYearDeath(putdata);

        compScientist.push_back(node);
        numOfSci--;
        cout << endl;

    }while(numOfSci > 0);

    putdata.close();
    getdata.close();

    return 0;
}

