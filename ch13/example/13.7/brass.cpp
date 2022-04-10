/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:18:51
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 17:04:16
 * @FilePath     : brass.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "brass.h"

using namespace std;


// formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

// Brass Method

Brass::Brass(const std::string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if (amt < 0)
    {
        cout << "Negative deposit not allowed; "
             << "deposit is cancelled." << endl;
    }
    else
    {
        balance += amt;
    }
}

void Brass::Withdraw(double amt)
{
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0)
    {
        cout << "Withdraw amount must be positive; "
             << "withdrawl cancelled." << endl;
    }
    else if (amt <= balance)
    {
        balance -= amt;
    }
    else
    {
        cout << "Withdraw amount of $" << amt
             << " exceeds your balance." << endl
             << "Withdrawl cancelled." << endl;
    }
    restore(initialState, prec);
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

// BrassPlus Methods

BrassPlus::BrassPlus(const std::string &s, long an, double bal, double ml, double r)
    : Brass(s, an, bal), maxLoan(ml), rate(r)
{
    oweBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r)
    : Brass(ba), maxLoan(ml), rate(r)
{
    oweBank = 0.0;
}

void BrassPlus::Withdraw(double amt)
{
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();

    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan - oweBank)
    {
        double advance = amt - bal;
        oweBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
    {
        cout << "Credit limit exceeded. Transaction cancelled." << endl;
    }
    restore(initialState, prec);
}

void BrassPlus::ViewAcct() const
{
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << oweBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%" << endl;
    restore(initialState, prec);
}

format setFormat()
{
    // set up ###.## format
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}