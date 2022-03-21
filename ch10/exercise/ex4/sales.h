/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:49:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 22:49:59
 * @FilePath     : sales.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__SALES_H__)
#define __SALES_H__

#include <iostream>

class Sales
{
private:
    enum {QUARTERS = 4};
    double sales[QUARTERS];
    double average;
    double max;
    double min;
public:
    Sales();
    Sales(const double ar[], int n);
    void show() const;
};

#endif // __SALES_H__
