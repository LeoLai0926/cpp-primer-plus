/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:42:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 00:44:05
 * @FilePath     : stock20.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__STOCK20_H__)
#define __STOCK20_H__

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock(); // default constructor
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock(); // noisy destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topVal(const Stock & s) const;
};

#endif // __STOCK20_H__
