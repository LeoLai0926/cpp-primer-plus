/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:17:07
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 17:20:24
 * @FilePath     : golf.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    cout << "Enter fullname: ";
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0)
    {
        return 0;
    }
    else
    {
        cout << "Enter the handicap: ";
        cin >> g.handicap;
        cin.get();
    }
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << "The fullname: " << g.fullname << endl;
    cout << "The handicap: " << g.handicap << endl;
}
