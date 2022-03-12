/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 10:05:26
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 10:16:52
 * @FilePath     : 7.12_atrctfun.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cmath>

// structure declarations
struct Polar
{
    double distance;                            // distance from origin
    double angle;                               // direction from origin
};

struct Rect
{
    double x;                                   // horizontal distance from origin
    double y;                                   // vertical distance from origin
};

// prototypes
Polar rect_to_polar(Rect xypos);
void show_polar(Polar dapos);

int main(int argc, char const *argv[])
{
    using namespace std;
    Rect rplace;
    Polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)         // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two values (q to quit): ";
    }
    cout << "Down" << endl;
    return 0;
}


// convert rectangular to polar coordinates
Polar rect_to_polar(Rect xypos)
{
    using namespace std;
    Polar rst;
    rst.distance =
        sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    rst.angle = atan2(xypos.y, xypos.x);
    return rst;                                 // returns a polar structure
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