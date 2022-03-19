/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 23:02:55
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 23:02:56
 * @FilePath     : file2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cmath>
#include "coordin.h"

// convert rectangular to polar coordinates
Polar rect_to_polar(Rect xypos)
{
    using namespace std;
    Polar rst;
    rst.distance =
        sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    rst.angle = atan2(xypos.y, xypos.x);
    return rst; // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(Polar dapos)
{
    using namespace std;
    const double RAD2DEG = 180 / M_PI;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * RAD2DEG;
    cout << " degrees." << endl;
}