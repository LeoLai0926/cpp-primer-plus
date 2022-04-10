/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:12:34
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 17:04:06
 * @FilePath     : brass.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__BRASS_H__)
#define __BRASS_H__

#include <string>

class Brass
{
private:
    std::string fullName;
    long acctNum;
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};


class BrassPlus : public Brass
{
private:
    double maxLoan;
    double rate;
    double oweBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0,
                double ml = 500, double r = 0.11125);
    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; }
    void ResetOwes(double o = 0.0) { oweBank = o; }
};


#endif // __BRASS_H__
