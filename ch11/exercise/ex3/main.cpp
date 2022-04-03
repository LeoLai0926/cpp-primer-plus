/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:38:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 09:33:28
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include "vector.h"

using namespace std;

int main(int argc, char const *argv[])
{

    using VECTOR::Vector;

    double direction;
    Vector step;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;
    double target;
    double dstep;
    int N;

    unsigned int maxSteps = 0;
    unsigned int minSteps = INT_MAX;
    unsigned int totSteps = 0;

    srand(time(NULL)); // seed random-number generator;

    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;
    cout << "Enter test times: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }

        maxSteps = steps > maxSteps ? steps : maxSteps;
        minSteps = steps < minSteps ? steps : minSteps;
        totSteps += steps;

        result.reset(0, 0, Vector::RECT);
        steps = 0;
    }



    cout << "After " << N << " times tests." << endl;
    cout << "Max steps = " << maxSteps << endl;
    cout << "Min steps = " << minSteps << endl;
    cout << "Average steps = " << double(totSteps) / N << endl;



    cout << "Bye." << endl;
    cin.clear();
    while (cin.get() != '\n')
    {
        continue;
    }

    return 0;
}
