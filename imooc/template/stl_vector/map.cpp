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
    pair<int, string> p3(8, "beijing");
    
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    cout << m[3] << endl;
    cout << m[6] << endl;

    map<int, string>::iterator itor = m.begin();
    for (; itor != m.end(); itor++)
    {
        cout << itor->first << endl;
        cout << itor->second << endl;
    }

    return 1;
}