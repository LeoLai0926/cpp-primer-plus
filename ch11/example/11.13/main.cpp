/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:38:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-29 22:57:25
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

using namespace std;

int main(int argc, char const *argv[])
{

    using VECTOR::Vector;

    srand(time(0));             // seed random-number generator;
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            step.rect_mode();
            steps++;
        }

        cout << "After " << steps << " steps, the subject "
                "has the following location: " << endl;
        cout << result << endl;
        result.polar_mode();
        cout << " or" << endl << result << endl;
        cout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye." << endl;
    cin.clear();
    while (cin.get() != '\n')
    {
        continue;
    }

    return 0;
}
