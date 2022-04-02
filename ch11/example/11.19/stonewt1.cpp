/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 23:58:24
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-02 23:33:27
 * @FilePath     : stonewt1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "stonewt1.h"

using namespace std;

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / LBS_PER_STN;
    pds_left = int(lbs) % LBS_PER_STN + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * LBS_PER_STN + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show_lbs() const
{
    cout << pounds << " pounds" << endl;
}

void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds" << endl;
}

Stonewt::operator int() const
{
    return int (pounds + 0.5);
}

Stonewt::operator double() const
{
    return pounds;
}
