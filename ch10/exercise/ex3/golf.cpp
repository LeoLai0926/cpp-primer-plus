/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:17:07
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 22:46:11
 * @FilePath     : golf.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "golf.h"

using namespace std;

Golf::Golf()
{
    cout << "Enter fullname: ";
    getline(cin, fullname);
    cout << "Enter the handicap: ";
    cin >> handicap;
    cin.get();
}

Golf::Golf(const char *name, int hc)
{
    fullname = name;
    handicap = hc;
}

void Golf::setHandicap(Golf &g, int hc)
{
    handicap = hc;
}

void Golf::show() const
{
    cout << "The fullname: " << fullname << endl;
    cout << "The handicap: " << handicap << endl;
}

