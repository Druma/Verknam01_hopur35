# ifndef NODE_H
# define NODE_H
#include <string>
using namespace std;

class Node {
public:
    Node(string nm, string sx, int brth, int dth);

private:
    string name, sex;
    int year_birth, year_death; // 0 = alive
};

// define functions
Node::Node(string nm, string sx, int brth, int dth)
{
    name = nm;
    sex = sx;
    year_birth = brth;
    year_death = dth;
}



#endif // node.h
