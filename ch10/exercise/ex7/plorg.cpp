/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 23:44:04
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:47:02
 * @FilePath     : plorg.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char *str, int ci)
{
    strcpy(name, str);
    CI = ci;
}

void Plorg::update(int ci)
{
    CI = ci;
}

void Plorg::show() const
{
    using namespace std;
    cout << "Name: " << name << ", CI: " << CI << endl;
}