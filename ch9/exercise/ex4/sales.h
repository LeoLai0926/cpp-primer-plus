/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:49:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 18:01:38
 * @FilePath     : sales.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__SALES_H__)
#define __SALES_H__

#include <iostream>

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);

    void setSales(Sales &s);

    void showSales(const Sales &s);
} // namespace SALES


#endif // __SALES_H__
