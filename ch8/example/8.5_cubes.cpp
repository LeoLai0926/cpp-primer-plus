/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 10:38:22
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 10:40:49
 * @FilePath     : 8.5_cubes.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

double cube(double a);
double refcube(double &a);

int main(int argc, char const *argv[])
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;

    cout << refcube(x);
    cout << " = cube of " << x << endl;

    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}