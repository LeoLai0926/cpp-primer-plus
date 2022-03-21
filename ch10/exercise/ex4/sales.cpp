/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:51:21
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:08:34
 * @FilePath     : sales.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <climits>
#include "sales.h"

using namespace std;

Sales::Sales()
{
    double total = 0.0;
    int i;
    max = INT_MIN;
    min = INT_MAX;

    cout << "Enter up to 4 sales quarters: " << endl;
    for (i = 0; i < QUARTERS; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> sales[i];
        cin.get();

        total += sales[i];
        max = max > sales[i] ? max : sales[i];
        min = min < sales[i] ? min : sales[i];
    }
    average = total / i;
}

Sales::Sales(const double ar[], int n)
{
    double total = 0.0;
    int i;
    max = ar[0];
    min = ar[0];

    for (i = 0; i < n && i < QUARTERS; i++)
    {
        sales[i] = ar[i];
        total += sales[i];
        max = max > sales[i] ? max : sales[i];
        min = min < sales[i] ? min : sales[i];
    }
    average = total / i;

    for (; i < QUARTERS; i++)
    {
        sales[i] = 0;
    }
}

void Sales::show() const
{
    cout << "Sales of " << QUARTERS << " quarters: " << endl;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << sales[i] << " ";
    }
    cout << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

