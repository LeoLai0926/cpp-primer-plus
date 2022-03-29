/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:34:32
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-29 19:50:36
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

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long total_min = hours * 60 * n + minutes * n;
    result.minutes = total_min % 60;
    result.hours = total_min / 60;
    return result;
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
