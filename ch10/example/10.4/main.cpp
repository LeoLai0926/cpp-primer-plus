/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 23:46:11
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 23:48:53
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "stock10.h"

int main(int argc, char const *argv[])
{
    {
        using std::cout;
        cout << "Using constructors to create new objects" << std::endl;
        Stock stock1("NanoSmart", 12, 20.0);            // syntax 1
        stock1.show();

        Stock stock2 = Stock("Boffo Objects", 2, 2.0);  // syntax 2
        stock2.show();

        cout << "Assigning stock1 to stock2: " << std::endl;
        stock2 = stock1;
        cout << "Listing stock1 and stock2: " << std::endl;
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object" << std::endl;
        stock1 = Stock("Nifty Foods", 10, 50.0);        // temp object
        cout << "Revised stock1: " << std::endl;
        stock1.show();
        cout << "Donw" << std::endl;
    }
    return 0;
}
