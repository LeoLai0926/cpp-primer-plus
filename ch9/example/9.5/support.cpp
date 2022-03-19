/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 00:12:26
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 00:21:00
 * @FilePath     : support.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "support.h"

using namespace std;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees." << endl;
}

void local()                // use local variable
{
    double warming = 0.8;   // new variable hides external one

    cout << "Local warming = " << warming << " degrees." << endl;
        // Access global variable with the
        // scope resolution operator
    cout << "But global warming = " << ::warming << " degrees." << endl;
}