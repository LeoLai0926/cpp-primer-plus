/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-06 21:08:47
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "cow.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Cow cow1;
    cow1.ShowCow();
    cout << endl;

    Cow cow2("NeNe", "MewMew", 240.2);
    cow2.ShowCow();
    cout << endl;

    Cow cow3(cow2);
    cow3.ShowCow();
    cout << endl;

    cow1 = cow2;
    cow1.ShowCow();
    cout << endl;

    return 0;
}
