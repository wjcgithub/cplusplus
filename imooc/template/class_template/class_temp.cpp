#include <iostream>
#include <stdlib.h>
#include "MyArray.h"

using namespace std;

int main(int argc, char const *argv[])
{
    MyArray<int, 5, 10> arr;
    arr.display();

    return 0;
}
