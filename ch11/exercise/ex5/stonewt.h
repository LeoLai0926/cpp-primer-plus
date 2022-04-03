/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 23:56:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 10:05:23
 * @FilePath     : stonewt.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__STONEWT_H__)
#define __STONEWT_H__

#include <iostream>

class Stonewt
{
public:
    enum TYPE { STONE, POUNDS, FLOATPOUNDS };
private:
    enum { LBS_PER_STN = 14 };
    int stone;
    double pds_left;
    double pounds;
    TYPE type;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();

    void setType(TYPE t) { type = t; };
    Stonewt operator+(const Stonewt &st) const;
    Stonewt operator-(const Stonewt &st) const;
    Stonewt operator*(double n) const;
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};


#endif // __STONEWT_H__
