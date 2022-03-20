/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 18:23:33
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 19:29:01
 * @FilePath     : stock00.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STOCK00_H__)
#define __STOCK00_H__

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }
public:
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif // __STOCK00_H__
