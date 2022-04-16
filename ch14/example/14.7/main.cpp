/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 23:05:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-17 01:58:52
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "worker0.h"

using namespace std;

const int LIM = 4;

int main(int argc, char const *argv[])
{
    Waiter bob("Bob Apple", 314L, 5);
    Singer bev("Becerly Hills", 512L, 3);
    Waiter w_temp;
    Singer s_temp;

    Worker * pw[LIM] = { &bob, &bev, &w_temp, &s_temp };

    int i;
    for (i = 2; i < LIM; i++)
    {
        pw[i]->Set();
    }

    for (i = 0; i < LIM; i++)
    {
        pw[i]->Show();
        std::cout << std::endl;
    }

    return 0;
}