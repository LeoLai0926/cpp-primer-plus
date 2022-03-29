/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:32:15
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-29 19:52:58
 * @FilePath     : mytime3.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__MYTIME2_H__)
#define __MYTIME2_H__

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    friend Time operator*(double n, const Time &t);
    friend std::ostream &operator<<(std::ostream &out, const Time &t);
};

#endif // __MYTIME2_H__
