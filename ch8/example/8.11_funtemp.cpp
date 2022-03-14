/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 21:25:51
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 21:29:25
 * @FilePath     : 8.11_funtemp.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

// function template prototype
template <typename T>                   // or class T
void Swap(T &a, T &b);

int main(int argc, char const *argv[])
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << "." << endl;
    Swap(i, j);
    cout << "After swap, now i = " << i << ", j = " << j << "." << endl;

    double x = 24.5;
    double y = 81.7;
    cout << "x = " << x << ", y = " << y << "." << endl;
    Swap(x, y);
    cout << "After swap, now x = " << x << ", y = " << y << "." << endl;
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;                             // temp a variable of type T
    temp = a;
    a = b;
    b = temp;
}