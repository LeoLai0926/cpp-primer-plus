/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 13:57:24
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 14:02:33
 * @FilePath     : namesp.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "namesp.h"

namespace pers
{
    using std::cout;
    using std::cin;

    void getPerson(Person &rp)
    {
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname;
    }

    void showPerson(const Person & rp)
    {
        cout << rp.lname << ", " << rp.fname;
    }
} // namespace pers


namespace debts
{
    using std::cout;
    using std::cin;
    using std::endl;

    void getDebt(Debt &rd)
    {
        getPerson(rd.name);
        cout << "Enter debt: ";
        cin >> rd.amount;
    }

    void showDebt(const Debt &rd)
    {
        showPerson(rd.name);
        cout << ": $" << rd.amount << endl;
    }

    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; i++)
        {
            total += ar[i].amount;
        }
        return total;
    }
} // namespace debts
