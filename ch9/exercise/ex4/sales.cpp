/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:51:21
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 18:04:20
 * @FilePath     : sales.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "sales.h"

using namespace std;

namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        double total = 0.0;
        int i;
        s.max = ar[0];
        s.min = ar[0];

        for (i = 0; i < n && i < QUARTERS; i++)
        {
            s.sales[i] = ar[i];
            total += s.sales[i];
            s.max = s.max > s.sales[i] ? s.max : s.sales[i];
            s.min = s.min < s.sales[i] ? s.min : s.sales[i];
        }
        s.average = total / i;

        for (; i < QUARTERS; i++)
        {
            s.sales[i] = 0;
        }
    }

    void setSales(Sales &s)
    {
        double sales[QUARTERS];

        cout << "Enter up to 4 sales quarters: " << endl;
        int i;
        for (i = 0; i < QUARTERS; i++)
        {
            cout << "#" << i + 1 << ": ";
            cin >> sales[i];
            cin.get();
        }

        setSales(s, sales, i);
    }

    void showSales(const Sales &s)
    {
        cout << "Sales of " << QUARTERS << " quarters: " << endl;
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << s.sales[i] << " ";
        }
        cout << endl;
        cout << "Average: " << s.average << endl;
        cout << "Maximum: " << s.max << endl;
        cout << "Minimum: " << s.min << endl;
    }
} // namespace SALES
