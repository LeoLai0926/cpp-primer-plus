/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:33:57
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:35:10
 * @FilePath     : account.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__ACCOUNT_H__)
#define __ACCOUNT_H__

#include <iostream>
#include <string>

class Account
{
private:
    std::string name;
    std::string username;
    double deposit;

public:
    Account(const std::string &client, const std::string &id, double dep = 0.0);
    void show() const;
    void save(double amount);
    void withdraw(double amount);
};

#endif // __ACCOUNT_H__
