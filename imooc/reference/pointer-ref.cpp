#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int a = 3;
    int *p = &a;
    int *&pr = p;

    *pr = 10;
    
    cout << a << endl;
    return 1;
}