/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 10:05:26
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 10:26:53
 * @FilePath     : 7.13_strctptr.cpp
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
void rect_to_polar(const Rect *pxy, Polar * pda);
void show_polar(const Polar *pda);

int main(int argc, char const *argv[])
{
    using namespace std;
    Rect rplace;
    Polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)         // slick use of cin
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two values (q to quit): ";
    }
    cout << "Down" << endl;
    return 0;
}


// convert rectangular to polar coordinates
void rect_to_polar(const Rect * pxy, Polar * pda)
{
    using namespace std;
    Polar rst;
    pda->distance =
        sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

// show polar coordinates, converting angle to degrees
void show_polar(const Polar * pda)
{
    using namespace std;
    const double RAD2DEG = 180 / M_PI;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * RAD2DEG;
    cout << " degrees." << endl;
}