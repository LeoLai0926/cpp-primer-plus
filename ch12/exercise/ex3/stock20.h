/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:42:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-07 00:47:27
 * @FilePath     : stock20.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__STOCK20_H__)
#define __STOCK20_H__

#include <iostream>

class Stock
{
private:
    char * company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock(); // default constructor
    Stock(const char * co, long n = 0, double pr = 0.0);
    ~Stock(); // noisy destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    friend std::ostream & operator<<(std::ostream & os, const Stock & st);

    const Stock & topVal(const Stock & s) const;
};

#endif // __STOCK20_H__
