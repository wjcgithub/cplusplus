#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
    m_iX = x;
    m_iY = y;
}

int Coordinate::getX()
{
    return m_iX;
}

int Coordinate::getY()
{
    return m_iY;
}

// Coordinate &Coordinate::operator-()
// {
//     m_iX = -m_iX;
//     this->m_iY = -this->m_iY;
//     return *this;
// }

Coordinate &operator-(Coordinate &c)
{
    c.m_iX = -c.m_iX;
    c.m_iY = -c.m_iY;
    return c;
}

//前++
Coordinate &Coordinate::operator++()
{
    m_iX++;  //++m_iX
    m_iY++;  //++m_iY
    return *this;
}

//后++
Coordinate Coordinate::operator++(int)
{
    //利用copy构造函数，因为构造方法中没有申请堆内存，数据成员也没有指针，所以用默认拷贝构造函数即可，否则需要重写拷贝构造函数
    Coordinate old(*this);
    this->m_iX++;
    this->m_iY++;
    return old;
}

//+运算符
// Coordinate Coordinate::operator+(Coordinate &c)
// {
//     Coordinate temp(0, 0);
//     temp.m_iX = this->m_iX + c.m_iX;
//     temp.m_iY = this->m_iY + c.m_iY;
//     return temp;
// }

Coordinate operator+(Coordinate c1, Coordinate c2)
{
    Coordinate temp(0, 0);
    temp.m_iX = c1.m_iX + c2.m_iX;
    temp.m_iY = c1.m_iY + c2.m_iY ;
    return temp;
}

//输出运算符重载
ostream& operator<<(ostream &output, Coordinate &coor)
{
    output << coor.m_iX << "," << coor.m_iY;
    return output;
}

//索引运算符重载
int Coordinate::operator [](int index)
{
    if (0 == index){
        return m_iX;
    } else if (1 == index){
        return m_iY;
    } else {
        return m_iY;
    }
}
