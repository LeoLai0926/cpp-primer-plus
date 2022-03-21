/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 23:45:45
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:47:47
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "plorg.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Plorg p;
    p.show();

    p.update(20);
    p.show();

    return 0;
}
