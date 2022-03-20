/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 19:29:15
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 19:46:43
 * @FilePath     : stock00.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0." << std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << "Transaction is aborted." << std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << "Transaction is aborted." << std::endl;
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have! "
                  << "Transaction is aborted." << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << "Company: " << company << std::endl
              << "  Shares: " << shares << std::endl
              << "  Share price: $" << share_val << std::endl
              << "  Total value: $" << total_val << std::endl;
}
