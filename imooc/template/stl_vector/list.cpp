#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(int argc, const char **argv)
{
    list<int> list1;
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(10);

    
    // for (size_t i = 0; i < list1.size(); i++)
    // {
    // 不可用下标访问    
    //     cout << list1[i] << endl;
    // }
    
    list<int>::iterator itor = list1.begin();
    for (; itor != list1.end(); itor++)
    {
        cout << *itor << endl;  
    }
    
    
    return 1;
}