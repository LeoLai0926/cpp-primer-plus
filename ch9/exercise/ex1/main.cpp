/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:20:38
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 17:25:43
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 2;

int main(int argc, char const *argv[])
{
    golf g[SIZE];
    cout << "Enter the information of the golf players: " << endl;

    int count = 0;
    while ((count < SIZE) && (setgolf(g[count])))
    {
        cout << "Enter the information of the golf players: " << endl;
        count++;
    }

    cout << endl << "List of all golf players." << endl;
    for (int i = 0; i < count; i++)
    {
        showgolf(g[i]);
    }

    cout << endl << "Reset all the players information." << endl;
    for (int i = 0; i < count; i++)
    {
        handicap(g[i], 90);
        showgolf(g[i]);
    }

    return 0;
}
