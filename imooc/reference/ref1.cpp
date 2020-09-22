#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int a = 10;
    int &b = a;  //引用必须初始化

    b = 20;
    cout << a << endl;

    a = 30;
    cout << b << endl;
    return 1;
}