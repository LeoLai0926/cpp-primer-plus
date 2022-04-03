/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 23:58:24
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 10:06:47
 * @FilePath     : stonewt.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "stonewt.h"

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

Stonewt Stonewt::operator+(const Stonewt &st) const
{
    return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt &st) const
{
    return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds * n);
}

ostream &operator<<(ostream &os, const Stonewt &st)
{
    if (st.type == Stonewt::STONE)
    {
        os << st.stone << " stone, " << st.pds_left << " pounds.";
    }
    else if (st.type == Stonewt::POUNDS)
    {
        os << int(st.pounds + 0.5) << " pounds.";
    }
    else if (st.type == Stonewt::FLOATPOUNDS)
    {
        os << st.pounds << " pounds.";
    }
    else
    {
        os << "Invalid Type.";
    }

    return os;
}
