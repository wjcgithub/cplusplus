#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate
{
    friend Coordinate &operator-(Coordinate &c);
    friend Coordinate operator+(Coordinate c1, Coordinate c2);
    friend ostream& operator<<(ostream &output, Coordinate &coor);
public:
    Coordinate(int x, int y);
    Coordinate &operator-();

    //前++
    Coordinate &operator++();
    //后++
    Coordinate operator++(int);
    //+运算符重载, 注意上面有友元重载，所以这里注释
    // Coordinate operator+(Coordinate &c);

    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;    
};

#endif //  