#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct 
{
    int x;
    int y;
}Coord;

int main(void)
{
    Coord c;
    Coord &c1 = c;

    c1.x = 10;
    c1.y = 20;
    
    cout << c.x << endl;
    cout << c.y << endl;
    return 1;
}