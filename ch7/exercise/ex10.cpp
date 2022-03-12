/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 22:04:01
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 22:09:19
 * @FilePath     : ex10.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

using namespace std;

double add(double x, double y);
double substract(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main(int argc, char const *argv[])
{
    double result = calculate(2.5, 10.4, add);
    cout << "The result of calculate(2.5, 10.4, add) is " << result << endl;

    result = calculate(10.4, 2.5, substract);
    cout << "The result of calculate(10.4, 2.5, minus) is " << result << endl;

    return 0;
}


double add(double x, double y)
{
    return x + y;
}

double substract(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pf) (double, double))
{
    return pf(x, y);
}