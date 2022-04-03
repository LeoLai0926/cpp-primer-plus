/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:34:32
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 09:43:25
 * @FilePath     : mytime3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "mytime3.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time &t1, const Time &t2)
{
    Time t;
    t.minutes = (t1.minutes + t2.minutes) % 60;
    t.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60;
    return t;
}

Time operator-(const Time &t1, const Time &t2)
{
    Time t;
    int totMin = (t1.hours * 60 + t1.minutes) - (t2.hours * 60 + t2.minutes);
    t.minutes = totMin % 60;
    t.hours = totMin / 60;
    return t;
}

Time operator*(const Time &t, double n)
{
    Time tt;
    int totMin = n * (t.hours * 60 + t.minutes);
    tt.minutes = totMin % 60;
    tt.hours = totMin / 60;
    return tt;
}

Time operator*(double n, const Time & t)
{
    Time result;
    long total_min = t.hours * 60 * n + t.minutes * n;
    result.minutes = total_min % 60;
    result.hours = total_min / 60;
    return result;
}

std::ostream & operator<<(std::ostream &out, const Time & t)
{
    out << t.hours << " hours, " << t.minutes << " minutes";
    return out;
}
