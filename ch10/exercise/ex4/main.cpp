/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:59:13
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:01:53
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "sales.h"

using namespace std;

int main(int argc, char const *argv[])
{
    double ar[4] = {11.1, 22.2, 33.3, 44.4};
    Sales sl1(ar, 4);
    sl1.show();
    Sales sl2;
    sl2.show();
    return 0;
}
