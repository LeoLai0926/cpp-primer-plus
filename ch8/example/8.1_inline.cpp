/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 02:43:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 02:49:05
 * @FilePath     : 8.1_inline.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

// an inline function definition
inline double square(double x) { return x * x; }

int main(int argc, char const *argv[])
{
    using namespace std;

    double a, b;
    double c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5);                  // can pass expressions

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << endl;
    cout << "Now c = " << c << endl;
    return 0;
}
