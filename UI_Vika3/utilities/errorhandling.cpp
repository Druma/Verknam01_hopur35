#include "errorhandling.h"

bool checkForInt(const std::string str){
    for(unsigned int i = 0; i<str.size(); i++)
    {
        if(isdigit(str.at(i)))
            return true;
    }
    return false;
}

bool checkForAllInt(const std::string str){
    for(unsigned int i = 0; i<str.size(); i++)
    {
        if(!isdigit(str.at(i)))
            return false;
    }
    return true;
}

