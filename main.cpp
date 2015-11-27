#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string FILENAME = "DATA.txt";

int main()
#hello
{
	fstream someFile;
	someFile.open("FILENAME");

	while( someFile.good() ) {
		getline (someFile, strengur, ';');
		cout << strengur << "\t";
    	}

	someFile.close();

	return 0;
}
