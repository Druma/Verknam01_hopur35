#include "variables.h"

void printVect(vector<Person> vect)
{
    for(unsigned int i = 0; i < vect.size(); i++)
    {
        printPer(vect[i]);
    }
}

// splice string from c (delim) into newdata
void split(const string& next, char c, vector<string>& newdata) {
   string::size_type i = 0;
   string::size_type j = next.find(c);

   while (j != string::npos) {
      newdata.push_back(next.substr(i, j-i));
      i = ++j;
      j = next.find(c, j);

      if (j == string::npos)
         newdata.push_back(next.substr(i, next.length()));
   }
}
