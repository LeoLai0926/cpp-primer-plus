/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:44:14
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-07 00:49:26
 * @FilePath     : stock20.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include "stock20.h"

// constructors (verbose version)
Stock::Stock() // default constructor
{
    std::cout << "Default constructor called" << std::endl;
    company = nullptr;
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called." << std::endl;
    company = new char[std::strlen(co) + 1];
    std::strcpy(company, co);
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
    std::cout << "Bye ";
    if (company == nullptr)
    {
        std::cout << std::endl;
    }
    else
    {
        std::cout << company << "!" << std::endl;
    }
    delete [] company;
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

std::ostream &operator<<(std::ostream &os, const Stock &st)
{
    os << "Company: ";
    if (st.company == nullptr)
    {
        os << std::endl;
    }
    else
    {
        os << st.company << std::endl;
    }
    os << "  Shares: " << st.shares << std::endl
        << "  Share price: $" << st.share_val << std::endl
        << "  Total value: $" << st.total_val << std::endl;
    return os;
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