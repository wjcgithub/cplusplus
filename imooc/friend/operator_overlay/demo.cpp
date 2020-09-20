#include "Coordinate.h"
#include <iostream>

int main(int argc, const char** argv) {
    // Coordinate coor1(1,3);
    // cout << coor1.getX() << "," << coor1.getY() << endl;

    //-运算符重载
    // -(-coor1);

    // cout << coor1.getX() << "," << coor1.getY() << endl;

    //前++重载
    // ++coor1;
    // cout << coor1.getX() << "," << coor1.getY() << endl;

    //后++重载
    // cout << coor1.getX() << "," << coor1.getY() << endl;
    // cout << (coor1++).getX() << "," << (coor1++).getY() << endl;
    // cout << coor1.getX() << "," << coor1.getY() << endl;

    //+运算符重载
    // Coordinate coor1(1,3);
    // Coordinate coor2(2,4);
    // Coordinate coor3(0,0);
    // coor3 = coor1 + coor2;
    // cout << coor3.getX() << "," << coor3.getY() << endl;

    //输出运算符重载
    // Coordinate coor1(1,3);
    // cout << coor1 << endl;

    //索引运算符重载
    Coordinate coor6(6,9);
    cout << "m_iX: " << coor6[0] << endl;
    cout << "m_iY: "<< coor6[1] << endl;

    return 0;
}