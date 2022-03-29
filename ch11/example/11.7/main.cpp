/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:38:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-29 19:41:57
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "mytime2.h"

using namespace std;

int main(int argc, char const *argv[])
{

    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "wedding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total word time = ";
    total = weeding + waxing;       // using operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;        // using operator-()
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;         // useing operator*()
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;

    return 0;
}
