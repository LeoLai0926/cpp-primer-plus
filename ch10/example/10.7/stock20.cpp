/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:44:14
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 00:45:21
 * @FilePath     : stock20.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "stock20.h"

// constructors (verbose version)
Stock::Stock() // default constructor
{
    std::cout << "Default constructor called" << std::endl;
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called." << std::endl;
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

// class destructor
Stock::~Stock()
{
    std::cout << "Bye " << company << "!" << std::endl;
}

// other methods
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

void Stock::show() const
{
    std::cout << "Company: " << company << std::endl
              << "  Shares: " << shares << std::endl
              << "  Share price: $" << share_val << std::endl
              << "  Total value: $" << total_val << std::endl;
}

const Stock & Stock::topVal(const Stock &s) const
{
    if (s.total_val > total_val)
    {
        return s;
    }
    else
    {
        return *this;
    }
}