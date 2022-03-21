/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:34:23
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:37:42
 * @FilePath     : account.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "account.h"

Account::Account(const std::string &client, const std::string &id, double dep)
{
    name = client;
    username = id;
    deposit = dep;
}


void Account::show() const
{
    using namespace std;
    cout << "Account Information" << endl;
    cout << "Name: " << name << endl;
    cout << "UserName: " << username << endl;
    cout << "Deposit: " << deposit << endl;
}


void Account::save(double amount)
{
    deposit += amount;
}


void Account::withdraw(double amount)
{
    using namespace std;
    if (deposit < amount)
    {
        cout << "Not enough money!" << endl;
    }
    else
    {
        deposit -= amount;
    }
}
