#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(int argc, const char **argv)
{
    map<int, string> m;
    pair<int, string> p1(3, "hello");
    pair<int, string> p2(6, "world");
    
    m.insert(p1);
    m.insert(p2);

    return 1;
}