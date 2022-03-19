/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 23:02:52
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 23:03:58
 * @FilePath     : file1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "coordin.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    Rect rplace;
    Polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two values (q to quit): ";
    }
    cout << "Down" << endl;
    return 0;
}