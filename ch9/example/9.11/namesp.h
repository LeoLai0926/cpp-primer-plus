/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 13:54:21
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 13:56:34
 * @FilePath     : namesp.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__NAMESP_H__)
#define __NAMESP_H__

#include <string>
// create the pers and debts namespaces
namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);
    void showPerson(const Person &);
} // namespace pers


namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };

    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
} // namespace debts


#endif // __NAMESP_H__
