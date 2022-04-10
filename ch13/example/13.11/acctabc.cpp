/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:18:51
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 22:15:58
 * @FilePath     : acctabc.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "acctabc.h"

AcctABC::AcctABC(const string &s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}


void AcctABC::Deposit(double amt)
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

void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}

AcctABC::Formatting AcctABC::SetFormat() const
{
    Formatting f;
    f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting & f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}


// Brass methods
void Brass::Withdraw(double amt)
{
    if (amt < 0)
    {
        cout << "Withdraw amount must be positive; "
             << "withdrawl cancelled." << endl;
    }
    else if (amt <= Balance())
    {
        AcctABC::Withdraw(amt);
    }
    else
    {
        cout << "Withdraw amount of $" << amt
             << " exceeds your balance." << endl
             << "Withdrawl cancelled." << endl;
    }
}


void Brass::ViewAcct() const
{
    // set up ###.## format
    Formatting f = SetFormat();
    cout << "Brass Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    Restore(f);
}

// BrassPlus methods

BrassPlus::BrassPlus(const std::string &s, long an, double bal, double ml, double r)
    : AcctABC(s, an, bal), maxLoan(ml), rate(r)
{
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r)
    : AcctABC(ba), maxLoan(ml), rate(r)
{
    owesBank = 0.0;
}

void BrassPlus::Withdraw(double amt)
{
    Formatting f = SetFormat();

    double bal = Balance();

    if (amt <= bal)
    {
        AcctABC::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
    {
        cout << "Credit limit exceeded. Transaction cancelled." << endl;
    }
    Restore(f);
}

void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "BrassPlus Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%" << endl;
    Restore(f);
}