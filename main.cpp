#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

//const string FILENAME = "DATA.txt";

int main()
{
        ifstream putdata;
        ofstream getdata;
        putdata.open("DATA.txt", ios::app);
    if(getdata.fail())
    {
        cout << "fail to open file" << endl;
        exit();
    }
    getdata.open("")
    if

    getdata.close();



        return 0;
}
