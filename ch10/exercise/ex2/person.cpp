/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:45:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:51:01
 * @FilePath     : person.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include "person.h"


Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const
{
    using namespace std;
    cout << fname << " " << lname << endl;
}


void Person::formalShow() const
{
    using namespace std;
    cout << lname << ", " << fname << endl;
}

