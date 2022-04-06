/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:46:35
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-07 00:49:52
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main(int argc, char const *argv[])
{
    // create an array of initial objects
    Stock stocks[STKS] =
    {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings: " << std::endl;
    int st;
    for (st = 0; st < STKS; st++)
    {
        std::cout << stocks[st] << std::endl;
    }

    // set pointer to fitst element
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
    {
        top = &top->topVal(stocks[st]);
    }

    // not top points to the most valuable holding
    std::cout << std::endl;
    std::cout << "Most valuable holding: " << std::endl;
    std::cout << *top << std::endl;;
    return 0;
}
