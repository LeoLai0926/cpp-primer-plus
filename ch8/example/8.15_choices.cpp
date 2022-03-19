/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 10:26:10
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 10:29:34
 * @FilePath     : 8.15_choices.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

template <typename T>
T lesser(T a, T b)              // #1
{
    return a < b ? a : b;
}

int lesser(int a, int b)        // #2
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;           // use #2
    cout << lesser(x, y) << endl;           // use #1 with double
    cout << lesser<>(m, n) << endl;         // use #1 with int
    cout << lesser<int>(x, y) << endl;      // use #1 with int
    return 0;
}
