/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 19:44:47
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 19:48:11
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "stock00.h"

int main(int argc, char const *argv[])
{
    Stock fluffy_the_cat;

    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();

    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();

    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();

    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();

    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();
    return 0;
}
