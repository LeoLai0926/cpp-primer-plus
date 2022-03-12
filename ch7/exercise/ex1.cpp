/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 16:20:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 16:23:39
 * @FilePath     : ex1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

double calc_mean(double num1, double num2);

int main(int argc, char const *argv[])
{

    double num1, num2;
    cout << "Enter two numbers: ";
    while (cin >> num1 >> num2)
    {
        if (num1 == 0.0 || num2 == 0.0)
        {
            break;
        }
        cout << "Harmonic mean: " << calc_mean(num1, num2) << endl;
        cout << "Enter two numbers: ";
    }

    return 0;
}


double calc_mean(double num1, double num2)
{
    return 2.0 * num1 * num2 / (num1 + num2);
}