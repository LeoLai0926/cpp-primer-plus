/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 23:56:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-29 23:57:24
 * @FilePath     : stonewt.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__STONEWT_H__)
#define __STONEWT_H__

class Stonewt
{
private:
    enum { LBS_PER_STN = 14 };
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};

#endif // __STONEWT_H__
