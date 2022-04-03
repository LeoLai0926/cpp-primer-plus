/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:38:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 10:37:42
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "stonewt.h"

using namespace std;

const int ArSize = 6;

int main(int argc, char const *argv[])
{

    Stonewt stoneArr[ArSize] = {275, 285.7, Stonewt(21, 8)};

    double input;
    for (int i = 3; i < ArSize; i++)
    {
        cout << "Enter #" << i+1 << " entry(in pounds): ";
        cin >> input;
        stoneArr[i] = input;
    }

    Stonewt maxSt = 0, minSt = 0;
    Stonewt st11 = Stonewt(11, 0.0);
    unsigned int count = 0;
    for (int i = 0; i < ArSize; i++)
    {
        if (i == 0)
        {
            minSt = stoneArr[i];
        }
        maxSt = stoneArr[i] > maxSt ? stoneArr[i] : maxSt;
        minSt = stoneArr[i] < minSt ? stoneArr[i] : minSt;
        if (stoneArr[i] > st11)
        {
            count++;
        }
    }

    maxSt.setType(Stonewt::FLOATPOUNDS);
    minSt.setType(Stonewt::FLOATPOUNDS);
    cout << "The max weight: " << maxSt << endl;
    cout << "The min weight: " << minSt << endl;
    cout << count << " objects are heavier than 11 stones." << endl;

    return 0;
}
