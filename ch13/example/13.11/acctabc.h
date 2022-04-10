/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:12:34
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 22:16:17
 * @FilePath     : acctabc.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__ACCTABC_H__)
#define __ACCTABC_H__

#include <iostream>
#include <string>

using namespace std;

class AcctABC
{
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const string & FullName() const { return fullName; }
    long AcctNum() const { return acctNum; }
    Formatting SetFormat() const;
    void Restore(Formatting & f) const;
public:
    AcctABC(const string &s="Nullbody", long an=-1, double bal=0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0;
    double Balance() const { return balance; }
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC() {}
};


class Brass : public AcctABC
{
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0)
        : AcctABC(s, an, bal) {}
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};

class BrassPlus : public AcctABC
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0,
                double ml = 500, double r = 0.11125);
    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; }
    void ResetOwes(double o = 0.0) { owesBank = o; }
};


#endif // __ACCTABC_H__
