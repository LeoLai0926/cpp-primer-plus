/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 22:37:08
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 22:39:14
 * @FilePath     : 2.4_sqrt.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cmath>    // or math.h

int main(int argc, char const *argv[])
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of you home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's tge equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;    
    return 0;
}
