/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 20:46:43
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-01 20:51:43
 * @FilePath     : ex5.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double income, tax;
    cout << "Please enter your income: ";

    while ((cin >> income) && (income >= 0))
    {
        if (income <= 5000)
        {
            tax = 0.0;
        }
        else if (income <= 15000)
        {
            tax = (income - 5000) * 0.1;
        }
        else if (income <= 35000)
        {
            tax = 10000 * 0.1 + (income - 15000) * 0.15;
        }
        else
        {
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        cout << "Your tax = " << tax << endl;
        cout << "Please enter your income: ";
    }


    return 0;
}
