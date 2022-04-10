/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 22:14:12
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 23:00:50
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "dma.h"

using namespace std;

int main(int argc, char const *argv[])
{

    BaseDMA shirt("Portabelly", 8);
    LacksDMA balloon("red", "Blimpo", 4);
    HasDMA map("Mercator", "Buffalo Kyes", 5);
    cout << endl;

    cout << "Displaying BaseDMA object: " << endl;
    cout << shirt << endl;

    cout << "Displaying LacksDMA object: " << endl;
    cout << balloon << endl;

    cout << "Displaying HasDMA object: " << endl;
    cout << map << endl;
    cout << endl;

    LacksDMA balloon2(balloon);
    cout << "Result of LacksDMA copy: " << endl;
    cout << balloon2 << endl;
    cout << endl;

    HasDMA map2;
    map2 = map;
    cout << "Result of HasDMA assignment: " << endl;
    cout << map2 << endl;

    return 0;
}
