/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 23:33:04
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:39:11
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "move.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Move m1(11.1, 22.2);
    Move m2(10.0, 20.0);
    m1.show();

    cout << "Enter new x and y: ";
    double x, y;
    cin >> x >> y;
    cout << "Reseting m1" << endl;
    m1.reset(x, y);
    m1.show();

    cout << "Show m2: " << endl;
    m2.show();

    Move m3 = m1.add(m2);
    cout << "Show m3: " << endl;
    m3.show();

    return 0;
}
